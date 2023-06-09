#include<stdio.h>
int main(){
    int n,ret=-1;
    scanf("%d",&n);
    int a[6][6]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             scanf("%d",&a[i][j]);
        }  
    }
    int max=a[0][0],min,m=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
                m=j;
                n=i;
            }   
        }
        for(int i=0;i<n;i++){
            if(max>a[i][m]){
                break;}
            else {
                 printf("%d %d",n,m);
                ret=1;
            }
        }
        if(ret>0){
            break;
        }else{
            printf("NONE");
        }
    }
    
    
    return 0;
}