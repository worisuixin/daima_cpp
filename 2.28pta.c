#include<math.h>
#include<stdio.h>
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

/* 你的代码将被嵌在这里 */

int narcissistic( int number ){
    int a,b,sum=0,ret=0;
    for(int i=0;number>0;i++){
        number/=10;
        ret++;
    }
    for(int i=0;number>0;i++){
        a=number%10;
        sum+=pow(a,ret);
        number/=10;
    }
    if(sum==number){
        return 1;
    }else return 0;
    }
void PrintN( int m, int n ){
    for(int i=m;m<=n;i++){
        if(narcissistic(i)){
            printf("%d\n",i);
        }
    }
    }
#include <stdio.h>

