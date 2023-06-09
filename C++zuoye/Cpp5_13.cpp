class_x.h:
class X {
    int i; // 私有成员i
public:
    X() { i = 0; } // 构造函数，初始化i为0
    friend void h(X*); // 声明函数h是X的友元函数
    friend class Y; // 声明Y是X的友元类
    friend class Z; // 声明Z是X的友元类
};
class_y.h:
#include <class_x.h>// 引入class_x.h中定义的类X
class Y {
public:
    void g(X* x) { x->i++; } // X的友元函数，实现对X的成员i加1
};
class_z.h:
#include <class_x.h>// 引入class_x.h中定义的类X
class Z {
public:
    void f(X* x) { x->i += 5; } // X的友元函数，实现对X的成员i加5
};
func_h.h:

#include <class_x.h> // 引入class_x.h中定义的类X

void h(X* x) { x->i += 10; } // X的友元函数，实现对X的成员i加10
main.cpp:

#include <class_x.h>// 引入class_x.h中定义的类X
#include <class_y.h> // 引入class_y.h中定义的类Y
#include <class_z.h>// 引入class_z.h中定义的类Z
#include <func_h.h> // 引入func_h.h中定义的函数h

int main() {
    X x; // 创建X类对象x
    Y y; // 创建Y类对象y
    Z z; // 创建Z类对象z
    y.g(&x); // 调用Y类中的g函数，对x的成员i加1
    z.f(&x); // 调用Z类中的f函数，对x的成员i加5
    h(&x); // 调用h函数，对x的成员i加10
    return 0;
}
