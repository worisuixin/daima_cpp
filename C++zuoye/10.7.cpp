#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    // 创建一个stack
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);

    // 每次pop函数弹出的元素为6和4
    cout << "Stack:" << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // 创建一个queue
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(5);

    // 每次pop函数弹出的元素为5和1
    cout << "Queue:" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // 创建一个priority_queue
    priority_queue<int> pq;
    pq.push(5);
    pq.push(3);
    pq.push(6);

     // 每次pop函数弹出的元素为6和5
     cout << "Priority Queue:" << endl;
     while (!pq.empty()) {
         cout << pq.top() << " ";
         pq.pop();
     }
     cout << endl;

     return 0;
}