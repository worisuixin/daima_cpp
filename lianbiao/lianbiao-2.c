#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;  //数据域
    struct Node* next;  //结构体变量即结点
}; //定义了一个结构体Node 

struct Node* createList(){//不需要数据
    struct Node* headNode= (struct Node*)malloc(sizeof(struct Node));
    //headNode结构体指针 成为了结构体变量  by动态内存申请
    //定义了一个Struct Node的指针 名字是headNode 而且是一个动态指针
    //变量使用前必须被初始化
    //headNode->data=1;  后面可能会更改，所以干脆不初始化。
    headNode->next=NULL;  //指针的使用：->，等于将指向这个结构体的指针直接使用指向next
    return  headNode;
}//模块化 创建表头

struct Node* createNode(int data)  //创建节点
{
    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}//创建节点  为插入节点铺垫

void printlist(struct Node* headNode){//打印或是说遍历链表 以headNode表示的链表
    struct Node* pMove=headNode->next; //定义一个移动的指针，从第二个节点开始打印
    while(pMove){//此时pMove指针储存的是headNode的Next next存的就是地址，所以是可以的 
        printf("%d",pMove->data);//打印数据
        pMove=pMove->next;
    }
    printf("\n");
}

//表头插入 插入到表头和第一个结点的中间
void insertNodeByHead(struct Node* headNode,int data){ 
//参数：插入到哪个链表，插入结点的数据是多少 参数不能乱写
    struct Node*newNode=createNode(data);  //创建插入的结点，有东西才能插，所以要先创建
    newNode->next=headNode->next;  //newnode的next放第二个结点的地址，即headNode next
    headNode->next=newNode;  //headNode的next放新结点的地址
}

//链表的删除，指定位置删除：
void deleteNodeByAppoin(struct Node*headNode,int posData){
    struct Node*posNode =headNode->next;
    struct Node*posNodeFront=headNode;
    if(posNode==NULL){
        printf("无法删除");
    }
    else{
        while(posNode->data!=posData){
            posNodeFront=posNode;
            posNode=posNodeFront->next;
            if(posNode==NULL){
                printf("未找到");
                return;
            }
        }
        posNodeFront->next=posNode->next;
        free(posNode);
    }
}
int main(){
    struct Node* list=createList(); //就达到了创建一个链表的想法
    insertNodeByHead(list,1);
    insertNodeByHead(list,2);
    insertNodeByHead(list,3);
    system("pause");
    return 0;
}