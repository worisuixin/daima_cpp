#ifndef CLASS_H // 头文件保护
#define CLASS_H
class X; // 类X的前置声明
class Y {
public:
void g(X* x); // 类X的友元函数
};
class Z {
public:
void f(X* x); // 类X的友元函数
};
class X {
private:
int i; // 私有成员i
friend void Y::g(X* x); // 类Y的成员函数是类X的友元函数
friend class Z; // 类Z是类X的友元类
friend void h(X* x); // 函数h是类X的友元函数
};
void Y::g(X* x) {
x->i++; // 实现对X的成员i加1
}
void Z::f(X* x) {
x->i += 5; // 实现对X的成员i加5
}
void h(X* x) {
x->i += 10; // 实现对X的成员i加10
}
#endif