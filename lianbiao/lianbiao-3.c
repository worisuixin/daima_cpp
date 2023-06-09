#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int data;
   struct ListNode* next;
};
int main(){
    int n;
    scanf("%d",&n);
    struct ListNode *head,*p,*t;
    head=(struct ListNode*)malloc(sizeof(struct ListNode));
    p=head; //为了复习时候看，这里p=head，是为了保留head的地址不被破坏
    //head此时就是一个指针，而p将继承其指针性质，变成头结点
    for(int i=0;i<n;i++){
        t=(struct ListNode*)malloc(sizeof(struct ListNode));  //malloc返回的是指针，所以强制转换必须也是一个指针，必须为XXX*的模式
        scanf("%d",&(t->data));
        p->next=t;
        p=t;
    }
    p->next=NULL;
    p=head->next;

while(p){
    printf("%d",p->data);
    if(p->next!=NULL){
        printf(" ");
    }
    p=p->next;
}

return 0;


    }