#include <iostream>
using namespace std;

template<typename T>
class OrderList {
public:
    void insert(T val) {
        Node<T>* prev = nullptr;
        Node<T>* curr = m_head;
        while (curr != nullptr && curr->data < val) {
            prev = curr;
            curr = curr->next;
        }
        if (prev == nullptr) {
            m_head = new Node<T>(val, m_head);
        } else {
            prev->next = new Node<T>(val, curr);
        }
    }

    void print() const {
        for (Node<T>* curr = m_head; curr != nullptr; curr = curr->next) {
            cout << curr->data << " ";
        }
        cout << endl;
    }

private:
    template<typename U>
    struct Node {
        U data;
        Node<U>* next;
        Node(U data = U(), Node<U>* next = nullptr)
            : data(data), next(next)
        {}
    };

    Node<T>* m_head = nullptr;
};

int main() {
    OrderList<int> a, b;

    a.insert(5);
    a.insert(8);
    a.insert(1);
    a.insert(3);
    a.insert(2);

    b.insert(7);
    b.insert(6);
    b.insert(4);
    b.insert(9);
    b.insert(10);

     for (OrderList<int>::Node<int>* node_b = b.head; node_b != nullptr; node_b=node_b->next){
        a.insert(node_b->data);
     }
    
    a.print();

    return 0;
}