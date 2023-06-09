#include<iostream>
using namespace std;
void fn1();  //声明函数fn1
int main(){
    for(int i=1;i<=10;i++){
        fn1();  //循环调用fn1()函数10次
    }
    return 0;
}
void fn1(){
    static int n=0;   //定义静态变量n，初值为0
    n++;  //对n的值加1
    cout<<"n = "<<n<<endl;   //输出n的值
}
/*在函数fn1()中定义了一个静态变量n，每次调用fn1()都会对n进行+1操作，
但不会因为函数调用结束而销毁n，因为n是静态的变量，所以n的值一直被保留着*/
