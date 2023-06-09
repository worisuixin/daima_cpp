#include <iostream>
#include <list>

using namespace std;

template<class T>
void exchange(list<T>& l1, typename list<T>::iterator p1, list<T>& l2, typename list<T>::iterator p2) {
    typename list<T>::iterator temp = p1;  // 临时迭代器
    while (temp != l1.end() && p2 != l2.end()) { // 使用循环交换链表中元素
        swap(*temp++, *p2++);
    }
    while (temp != l1.end()) {  // 如果l1中还有剩余，则插入到l2的结尾
        l2.insert(l2.end(), *temp++);
    }
    while (p2 != l2.end()) {  // 如果l2中还有剩余，则插入到l1的结尾
        l1.insert(l1.end(), *p2++);
    }
}

int main() {
    list<int> l1 = {1, 2, 3, 4, 5};
    list<int> l2 = {6, 7, 8, 9};

    list<int>::iterator p1 = l1.begin();
    advance(p1, 2); // p1指向l1的第3个元素（值为3）
    list<int>::iterator p2 = l2.begin();
    advance(p2, 1); // p2指向l2的第2个元素（值为7）

    cout << "Before exchange:" << endl;
    cout << "l1: ";
    for (auto i : l1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "l2: ";
    for (auto i : l2) {
        cout << i << " ";
    }
    cout << endl;

    exchange(l1, p1, l2, p2);

     cout << "\nAfter exchange:" << endl;
     cout << "l1: ";
     for (auto i : l1) {
         cout << i << " ";
     }
     cout << endl;

     cout << "l2: ";
     for (auto i : l2) {
         cout << i << " ";
     }
     cout << endl;

     return 0;
}