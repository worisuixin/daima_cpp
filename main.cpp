#include <iostream> // 包含头文件iostream
#include <Class.h>
using namespace std;
int main() {
X x;
Y y;
Z z;
y.g(&x);
z.f(&x);
h(&x);
cout << "i = " << x.i << endl; // 输出结果为16
return 0;
}