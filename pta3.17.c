#include<stdio.h>
int main(){
    int num=0;
    char X='X';
    char t;
    scanf("%d",&num);
    scanf("%c",&t);
    int a[20]={0};
    int ret;
    int py=0;
    char arr[10][10]={0};
    for(int i=0;i<num;i++){
        for(int j=0;j<10;j++){
            scanf("%c",&arr[i][j]);
            if(j<=9&&(arr[i][j]>=48&&arr[i][j]<=57)||j==9&&arr[i][j]=='X'){
               continue;
            }else{
                ret++;
            }
        }
        if(ret>0){
            a[i]=1;
        }
    }
    
 for(int i=0;i<num;i++){
     int sum=0;
     if(a[i]==0){
         for(int j=0;j<9;j++){
             sum=(j+1)*arr[i][j];
         }
         if(arr[i][9]=='X'){
             sum+=100;
         }
         else sum+=arr[i][9]*10;
         
         if(sum%11!=0){
             a[i]=1;
         }
     }
 }
    for(int i=0;i<num;i++){
        if(a[i]!=0){
            py++;
        }
    }
  if(py==0){
      printf("All passed");
      return 0;
  }else{
    for(int i=0;i<num;i++){
        if(a[i]!=0){
            printf("%s\n",arr[i]);
        }
    }  
  }
    
    return 0;
}