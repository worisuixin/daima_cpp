#include<iostream>
using namespace std;
class Mammal { 
public:
    virtual void speak() {
        cout << "This is the sound of a mammal.\n";
    }
};
class Dog : public Mammal {
public:
    void speak() {
        cout << "This is the sound of a dog: Woof!\n";
    }
};
int main() {
    Dog myDog;
    myDog.speak();
    return 0;
}
