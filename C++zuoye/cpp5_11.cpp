#include <iostream>
using namespace std;
int n;// 声明全局变量n
void fn1();// 声明函数fn1
int main() {
    n = 10;
    cout << "在main函数中,n的值为:" << n << endl;
    fn1();
    cout << "回到main函数后,n的值为:" << n << endl;
    return 0;
}


#include <iostream>
using namespace std;
extern int n;// 声明全局变量n
void fn1() {// 声明函数fn1
    n = 20;
    cout << "在fn1函数中,n的值为:" << n << endl;
}