#include<stdio.h>
int main(){
    char arr[80]={0};
    char arr1[80]={0};
    int ret=0;
    int s=0;
    for(int i=0;i<80;i++){
        scanf("%c",&arr1[i]);
                if(arr1[i]=='\n')
                    {break;}
        else{
        for(int j=0;j<ret;j++){
            if(arr1[i]==arr[j]){
                break;
            }
            else {
                arr[s++]=arr[j];
                ret++;
            }
        }
    }
    }
    printf("%s",arr); 
    return 0;
}