#include <iostream>
using namespace std;
class Car; //向前声明Car类
class Boat {//定义Boat类
    private:
        int weight;
    public:
        Boat(int w) : weight(w) {}
        friend int getTotalWeight(Boat b, Car c); //定义友元函数
};
class Car {//定义Car类
    private:
        int weight;
    public:
        Car(int w) : weight(w) {}
        friend int getTotalWeight(Boat b, Car c); //定义友元函数
};
int getTotalWeight(Boat b, Car c) {//定义友元函数
    return b.weight + c.weight;
}
int main() {
    Boat myBoat(100);
    Car myCar(200);
    int totalWeight = getTotalWeight(myBoat, myCar);
    cout << "Total Weight: " << totalWeight << endl;
    return 0;
}
