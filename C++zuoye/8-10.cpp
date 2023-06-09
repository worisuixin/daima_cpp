#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    friend Point operator+(const Point& p1, const Point& p2) {
        return Point(p1.x + p2.x, p1.y + p2.y);
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;
    cout << "p1: ";
    p1.display();
    cout << "p2: ";
    p2.display();
    cout << "p3: ";
    p3.display();
    return 0;
}
