#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}lnode,*lnodes;

struct node* createlist(){
    lnodes head;
    head=(lnodes)malloc(sizeof(lnode));
    head->next=NULL;
    return head;
}

lnodes printlist(lnodes head){
    lnodes pmove;
    pmove=head->next;
    while(pmove){
        printf("%d",pmove->data);
        pmove=pmove->next;
    }
}

lnodes createnode(int data){
    lnodes newnode=(lnodes)malloc(sizeof(lnode));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

void insertlist(lnodes head,int data){
    lnodes newnode=createnode(data);
    lnodes tail;
    tail->next=newnode;
    tail=newnode;
}
int main(){
    lnodes list=createlist();
    lnodes tail=list;
    insertlist(list,1);
    insertlist(list,2);
    insertlist(list,3);
    printlist(list);
}