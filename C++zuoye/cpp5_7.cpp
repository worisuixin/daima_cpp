#include <iostream>
using namespace std;
class Cat {
public:
    static int numOfCats; // 静态数据成员numOfCats，记录Cat的个体数目
    static int getNumOfCats() {
        return numOfCats; // 静态成员函数getNumOfCats()，读取numOfCats
    }
};
int Cat::numOfCats = 0; // 初始化静态数据成员numOfCats为0
int main() {
    Cat cat1;
    Cat::numOfCats++; 
    // 每次创建一个Cat对象，numOfCats加1。注意，这里使用了作用域运算符::来调用静态数据成员
    cout << "There are " << Cat::getNumOfCats() << " cats." << endl; 
    // 输出当前Cat的个体数目。同样，这里也使用了作用域运算符来调用静态成员函数
    Cat cat2;
    Cat::numOfCats++;
    cout << "There are " << Cat::getNumOfCats() << " cats." << endl;
    return 0;
}