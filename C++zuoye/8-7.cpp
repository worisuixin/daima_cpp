#include <iostream>
class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {};
    // 前缀 ++
    Point& operator++() {
        ++x;
        ++y;
        return *this;
    }
    // 后缀 ++
    Point operator++(int) {
        Point old = *this;
        ++(*this);
        return old;
    }
    // 前缀 --
    Point& operator--() {
        --x;
        --y;
        return *this;
    }
    // 后缀 --
    Point operator--(int) {
        Point old = *this;
        --(*this);
        return old;
    }
    void print() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};
int main() {
    Point p1(1, 2);
    std::cout << "p1: ";
    p1.print();
    ++p1;
    std::cout << "p1 after prefix ++: ";
    p1.print();
    p1++;
    std::cout << "p1 after suffix ++: ";
    p1.print();
    --p1;
    std::cout << "p1 after prefix --: ";
    p1.print();
    p1--;
    std::cout << "p1 after suffix --: ";
    p1.print();
    return 0;
}