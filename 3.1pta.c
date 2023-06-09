#include<stdio.h>
int main(){
    int n,ret=1;
    scanf("%d",&n);
    int a[6][6]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             scanf("%d",&a[i][j]);
        }  
    }
    int max=a[0][0],min,m=0,p;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
                m=j;
                p=i;
            }   
        }
        for(int s=0;s<n;s++){
            if(max>a[s][m]){
                ret=-1;
                break;}
           }
           max=a[i+1][0];
        if(ret>0){
            break;
        }
        ret=1;
    }
    if(ret>0){
         printf("%d %d",p,m)  ;
        }else{
            printf("NONE");
        }
    
    return 0;
}