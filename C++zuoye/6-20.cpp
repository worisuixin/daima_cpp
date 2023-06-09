#include <iostream>
using namespace std;
class SimpleCircle {
private:
int* itsRadius; // 圆的半径（动态分配内存的指针）
public:
// 构造函数
SimpleCircle(int r) {
itsRadius = new int; // 动态分配内存
*itsRadius = r;
}
// 析构函数，释放动态分配的内存
~SimpleCircle() {
delete itsRadius;
}
// 获取圆的半径值
int getRadius() const {
    return *itsRadius;
}
// 设置圆的半径值
void setRadius(int r) {
    *itsRadius = r;
}
// 获取圆的面积
double getArea() const {
    return 3.14 * (*itsRadius) * (*itsRadius);
}
};
int main() {
SimpleCircle circle1(5); // 创建圆1，半径为5
cout << "Circle 1:" << endl;
cout << "Radius: " << circle1.getRadius() << endl;
cout << "Area: " << circle1.getArea() << endl;
circle1.setRadius(10); // 修改圆1半径为10
cout << "Circle 1 after set radius to 10:" << endl;
cout << "Radius: " << circle1.getRadius() << endl;
cout << "Area: " << circle1.getArea() << endl;
SimpleCircle circle2(8); // 创建圆2，半径为8
cout << "Circle 2:" << endl;
cout << "Radius: " << circle2.getRadius() << endl;
cout << "Area: " << circle2.getArea() << endl;
return 0;
}