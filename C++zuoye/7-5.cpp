#include <iostream>
using namespace std;
class Shape {  // 基类shape
public:
    virtual double getArea() const = 0; //纯虚函数
};
class Rectangle : public Shape {  //派生类rectangle 继承自shape
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    ~Rectangle() {}    //析构函数
    double getArea() const {
        return length * width;
    }       
};
class Circle : public Shape {    //派生类circle
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    ~Circle() {}
    double getArea() const {
        return 3.14 * radius * radius;
    }
};

class Square : public Rectangle {  //派生类2square
public:
    Square(double l) : Rectangle(l, l) {}
    ~Square() {}
};

int main() {
    Rectangle rec(3, 4);
    cout << "The area of the rectangle is: " << rec.getArea() << endl;

    Circle cir(5);
    cout << "The area of the circle is: " << cir.getArea() << endl;

    Square sqr(6);
    cout << "The area of the square is: " << sqr.getArea() << endl;

    return 0;
}