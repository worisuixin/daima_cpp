#include <iostream>
using namespace std;
extern int n;// 声明全局变量n
void fn1() {// 声明函数fn1
    n = 20;
    cout << "在fn1函数中,n的值为:" << n << endl;
}