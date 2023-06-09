#include <iostream>
using namespace std;
class Counter {
private:
    int count;
public:
    Counter() {
        count = 0;
    }
    Counter(int c) {
        count = c;
    }
    void display() {
        cout << "Counter value: " << count << endl;
    }
    Counter operator+(const Counter &c) const {
        return Counter(count + c.count);
    }
};
int main() {
    Counter c1(2), c2(3);
    Counter c3 = c1 + c2;
    c3.display();
    return 0;
}
