#include<iostream>
using namespace std;
class BaseClass {
public:
    void fn1() {
        cout << "This is BaseClass fn1()" << endl;
    }
    void fn2() {
        cout << "This is BaseClass fn2()" << endl;
    }
};
class DerivedClass : public BaseClass {
public:
    void fn1() {
        cout << "This is DerivedClass fn1()" << endl;
    }
    void fn2() {
        cout << "This is DerivedClass fn2()" << endl;
    }
};
int main() {
    DerivedClass derivedObj;
    BaseClass *bptr = static_cast<BaseClass*>(&derivedObj);  // 将DerivedClass对象的地址转换为基类指针类型
    DerivedClass *dptr = static_cast<DerivedClass*>(&derivedObj);  // 将DerivedClass对象的地址转换为DerivedClass指针类型
    derivedObj.fn1();  // 调用DerivedClass对象的fn1函数，输出 This is DerivedClass fn1()
    derivedObj.fn2();  // 调用DerivedClass对象的fn2函数，输出 This is DerivedClass fn2()
    bptr->fn1();  // 通过基类指针调用fn1函数，输出 This is BaseClass fn1()
    bptr->fn2();  // 通过基类指针调用fn2函数，输出 This is DerivedClass fn2()
    dptr->fn1();  // 通过DerivedClass指针调用fn1函数，输出 This is DerivedClass fn1()
    dptr->fn2();  // 通过DerivedClass指针调用fn2函数，输出 This is DerivedClass fn2()
    return 0;
}