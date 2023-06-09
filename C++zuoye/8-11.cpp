#include <iostream>
using namespace std;
class Shape {
public:
    virtual float getArea() = 0;
    virtual float getPerim() = 0;
};
class Rectangle : public Shape {
public:
    Rectangle(float w, float h) : width(w), height(h) {}
    virtual float getArea() { return width * height; }
    virtual float getPerim() { return 2 * (width + height); }
protected:
    float width, height;
};
class Circle : public Shape {
public:
    Circle(float r) : radius(r) {}
    virtual float getArea() { return 3.14 * radius * radius; }
    virtual float getPerim() { return 2 * 3.14 * radius; }
protected:
    float radius;
};
class Square : public Rectangle {
public:
    Square(float s) : Rectangle(s, s) {}
};
class Shape {
public:
    virtual float getArea() = 0;
    virtual float getPerim() = 0;
    virtual int getVertexCount() { return 4; } // 默认顶点个数为4
};
class Square : public Rectangle {
public:
    Square(float s) : Rectangle(s, s) {}
};

class Shape {
public:
    virtual float getArea() = 0;
    virtual float getPerim() = 0;
    virtual int getVertexCount() { return 4; } // 默认顶点个数为4
};
int main() {
    Shape* shapes[3];
    shapes[0] = new Rectangle(2, 3);
    shapes[1] = new Circle(5);
    shapes[2] = new Square(4);
    for (int i = 0; i < 3; i++) {
        cout << "Area: " << shapes[i]->getArea() << endl;
        cout << "Perimeter: " << shapes[i]->getPerim() << endl;
        cout << "Vertex count: ";
        Rectangle* rectPtr = dynamic_cast<Rectangle*>(shapes[i]); // 将Shape指针类型转换为Rectangle指针类型
        if (rectPtr != nullptr) {
            cout << rectPtr->getVertexCount() << endl; // 如果能够成功转换，则获取顶点个数
        } else {
            cout << shapes[i]->getVertexCount() << endl; // 否则使用Shape类默认的顶点个数
        }
        cout << endl;
    }
    return 0;
}
