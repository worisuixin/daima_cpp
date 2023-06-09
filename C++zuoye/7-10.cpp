#include <iostream>
using namespace std;
class Object { //定义object类
protected:
    int weight;  //定义成员变量
public:
    Object(int w) : weight(w) {  //构造函数，初始化weight
        cout << "Object构造函数被调用" << endl;
    }
    ~Object() { //析构函数 释放资源
        cout << "Object析构函数被调用" << endl;
    }
    int getWeight() const {
        return weight;
    }
};
class Box : public Object {  //定义Vox类，继承自Object
private:
    int height;
    int width;
public: //构造函数，初始化weight height width
    Box(int w, int h, int wd) : Object(w), height(h), width(wd) {
        cout << "Box构造函数被调用" << endl;
    }
    ~Box() {  //析构函数
        cout << "Box析构函数被调用" << endl;
    }
    int getVolume() const {
        return weight * height * width;
    }
};

int main() {
    Box myBox(10, 20, 30);
    cout << "盒子的体积是：" << myBox.getVolume() << endl;
    return 0;
}