#include<stdio.h>
#include<string.h>
int main(){
    char str[80][80]={0};
    int cha[80]={0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
        cha[i]=strlen(str[i]);
    }
    int max=cha[0];
    for(int i=0;i<n;i++){
        if(cha[i]>max){
            max=cha[i];
        }
    }
    printf("The longest is: %s",str[max]);
return 0;
}