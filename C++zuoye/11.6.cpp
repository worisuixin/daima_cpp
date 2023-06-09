#include <iostream>
#include <fstream>
using namespace std;

class Dog {
private:
    int weight;
    int age;
public:
    Dog(int w, int a) {
        weight = w;
        age = a;
    }
    void print() {
        cout << "weight=" << weight << " age=" << age << endl;
    }
    void saveToFile(const char* filename) {
        ofstream fout(filename);
        fout << weight << ' ' << age << endl;
        fout.close();
    }
    void loadFromFile(const char* filename) {
        ifstream fin(filename);
        fin >> weight >> age;
        fin.close();
    }
};

int main() {
    Dog dog1(5, 10);
    cout << "dog1: ";
    dog1.print();

    dog1.saveToFile("dog.txt");

    Dog dog2(0, 0);
    dog2.loadFromFile("dog.txt");
    cout << "dog2: ";
    dog2.print();

    cout << "binary file:\n";
    dog1.saveToFile("dog.bin");
    dog2.loadFromFile("dog.bin");
    cout << "dog2: ";
    dog2.print();

    cout << "ASCII codes of dog.txt:\n";
    ifstream fin("dog.txt");
    char ch;
    while (fin.get(ch)) {
        cout << int(ch) << ' ' << ch << endl;
    }
    fin.close();

    cout << "ASCII codes of dog.bin:\n";
    fin.open("dog.bin", ios::binary);
    while (fin.get(ch)) {
        cout << int(ch) << ' ' << ch << endl;
    }
    fin.close();

    return 0;
}