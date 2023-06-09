  #include<stdio.h>
  struct Node{
    int data;  //数据域
    struct Node* next;  //指针域
  }; //链表即把结构体变量和结构体变量连接在一起by指针。
  //放指针的地方,放第二个结构体的地址；
int main(){
    struct Node Node1={1, NULL}; //即数据为1，指针为空
    struct Node Node2={2, NULL}; 
    struct Node Node3={3, NULL};
    Node1.next=&Node2;  //即在Node1的指针区域放第二个结构体的指针
    Node2.next=&Node3;  //在Node2的指针区域放第三个结构体的指针
    return 0;// 静态链表，一般不使用。
}//动态创建一个链表：动态内存申请+模块化设计
/*1.创建链表（创建一个表头表示整个链表）
    2.创建节点  3.插入节点  4.删除节点  5.打印遍历链表（测试）*/

//结构体指针  经 动态内存申请 变成结构体变量