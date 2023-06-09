#include<iostream>
using namespace std;
class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerim() = 0;
};
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() {
        return width * height;
    }
    double getPerim() {
        return 2 * (width + height);
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() {
        return 3.14 * radius * radius;
    }
    double getPerim() {
        return 2 * 3.14 * radius;
    }
};
int main() {
    Rectangle myRect(4, 5);
    Circle myCircle(7);
    cout << "The area of the rectangle is: " << myRect.getArea() << endl;
    cout << "The perimeter of the rectangle is: " << myRect.getPerim() << endl;
    cout << "The area of the circle is: " << myCircle.getArea() << endl;
    cout << "The perimeter of the circle is: " << myCircle.getPerim() << endl;
   return 0; 
}

