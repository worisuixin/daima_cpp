#include<stdio.h>
int main(){
    int a[20]={0};
    int o,p,q,r;
     for(o=0;o<10;o++){
        scanf("%d",&a[o]);
         q=o;
         if(a[o]==0)
             break;
    }
     for(p=q;p<20;p++){
        scanf("%d",&a[p]);
         r=p;
         if(a[p]==0)
             break;
     }
    for(int i=1;i<r;i++){
        for(int j=0;j<r-i;j++){
            int t;
            if(a[j]>a[j+1]){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<r;i++){
        if(a[i]!=0){
            printf("%d ",a[i]);
        }
    }
    
    
    
    
    return 0;
}