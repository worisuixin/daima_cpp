#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node* next;
    Node(T data):data(data),next(NULL){}
};

template <class T>
class LinkedList{
private:
    Node<T>* head; // 头结点指针
public:
    LinkedList():head(NULL){} // 构造函数
    
    // 在链表头插入一个元素
    void insertFirst(T data){
        Node<T>* node = new Node<T>(data);
        node->next = head;
        head = node;
    }

    // 将另一个链表的所有元素添加到本链表尾部
    void addToEnd(LinkedList<T>& otherList){
        if(otherList.head == NULL) return; // 如果要添加的链表为空，则不作处理

        if(head == NULL){ // 如果本链表为空，则直接将头指针指向另一个链表的头指针
            head = otherList.head;
        }else{ // 否则遍历找到最后一个结点，然后将其 next 指针指向另一个链表的头结点
            Node<T>* ptr = head;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = otherList.head;
        }
        otherList.head = NULL; // 清空另一个链表的头指针，避免重复释放内存
    }

    // 输出链表中所有元素
    void printList(){
        Node<T>* ptr = head;
        while(ptr != NULL){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main(){
    LinkedList<int> a;
    LinkedList<int> b;

    // 分别向两个链表中插入5个元素
    for(int i=1; i<=5; i++){
        a.insertFirst(i);
        b.insertFirst(i+5);
    }

    // 将b中的所有元素添加到a的尾部
    a.addToEnd(b);

    // 输出合并后的链表a中所有元素
    cout << "合并后的链表a: ";
    a.printList();

    return 0;
}