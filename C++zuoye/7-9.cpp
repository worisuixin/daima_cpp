#include<iostream>
using namespace std;
class Base {
public:
    void fn1() { cout<< "Base fn1()" <<endl; }
    void fn2() { cout<< "Base fn2()" <<endl; }
};

class Derived : private Base {
public:
    void callFn1() {
        fn1(); // 调用基类的fn1()函数
    }
};
int main() {
    Derived d;
    d.callFn1(); // 输出 Base fn1()
    return 0;
}