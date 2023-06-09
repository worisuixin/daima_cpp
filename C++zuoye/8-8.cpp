#include <iostream>
using namespace std;
class BaseClass {
public:
    virtual void fn1() {
        cout << "BaseClass::fn1()" << endl;
    }
    void fn2() {
        cout << "BaseClass::fn2()" << endl;
    }
};
class DerivedClass : public BaseClass {
public:
    void fn1() override {
        cout << "DerivedClass::fn1()" << endl;
    }

    void fn2() {
        cout << "DerivedClass::fn2()" << endl;
    }
};
int main() {
    DerivedClass derived_object;
    BaseClass* base_ptr = &derived_object;
    DerivedClass* derived_ptr = &derived_object;
    base_ptr->fn1();     // 输出：DerivedClass::fn1()
    base_ptr->fn2();     // 输出：BaseClass::fn2()
    derived_ptr->fn1();  // 输出：DerivedClass::fn1()
    derived_ptr->fn2();  // 输出：DerivedClass::fn2()
    return 0;
}
