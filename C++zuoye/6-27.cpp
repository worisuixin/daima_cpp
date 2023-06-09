#include <iostream>
#include <string>
using namespace std;
class Employee { // 定义Employee类
private:
string name; // 定义姓名属性
string address; // 定义地址属性
string city; // 定义城市属性
int zipCode; // 定义邮编属性
public:
void setName(string empName) { // 定义setName函数，用于改变对象的姓名属性
name = empName;
}
void display() { // 定义display函数，用于显示员工属性
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;
}
};
int main() {
Employee emp1; // 创建一个Employee对象emp1
emp1.setName("Tom"); // 修改emp1的姓名属性
emp1.display(); // 显示emp1的属性
return 0;
}