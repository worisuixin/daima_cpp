#include <iostream>
using namespace std;
class BaseClass {
public:
    virtual ~BaseClass() {
        cout << "BaseClass::~BaseClass()" << endl;
    }
};
class DerivedClass : public BaseClass {
public:
    ~DerivedClass() override {
        cout << "DerivedClass::~DerivedClass()" << endl;
    }
};
int main() {
    BaseClass* base_ptr = new DerivedClass();
    delete base_ptr;
    return 0;
}
