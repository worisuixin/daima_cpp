#include<iostream>
using namespace std;
class Mammal{
    public:
    Mammal(){
        cout<<"This is Mammal's a"<<endl;
    }
    ~Mammal(){
        cout<<"This is Mammal's b"<<endl;
    }
};
class Dog:public Mammal{
    public:
    Dog(){
        cout<<"This is Dog's a"<<endl;
    }
    ~Dog(){
        cout<<"This is Dog's b"<<endl;
    }
};
int main(){
    Dog dog;
    return 0;
}