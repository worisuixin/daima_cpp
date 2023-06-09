#include <iostream>
#include <string>
using namespace std;
class Document {  //定义Document类
protected:
    string name;
public:
    Document(string n) : name(n) {}
};
class Book : public Document {  //派生出Book类
private:
    int pageCount;
public:
    Book(string n, int pc) : Document(n), pageCount(pc) {}
    void print() const {
        cout << "Name: " << name << endl;
        cout << "Page Count: " << pageCount << endl;
    }
};
int main() {
    Book book("The C++ Programming Language", 1368);
    book.print();
    return 0;
}