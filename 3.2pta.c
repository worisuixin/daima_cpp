#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
 scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ){
    int l=number;
    int d=number;
    int  a,b=-1,sum=0,ret=0,c;
    for(;l!=0;){
        l/=10;
        ret++;
    }
    for(;d!=0;){
        a=d%10;
        c=1;
    for(int i=0;i<ret;i++){
        c*=a ;
        }
        sum+=c;
        d/=10;
    }
    if(sum==number){
        b=1;
        return b;
    }else
        return b;
    }
void PrintN( int m, int n ){
 for(int i=m+1;i<n;i++){
       if(narcissistic(i)==1){
            printf("%d\n",i);
                }
    }
   }

