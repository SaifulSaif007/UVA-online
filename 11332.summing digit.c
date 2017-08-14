#include<stdio.h>

int main()
{
    int   n,m=0,d;
while(scanf("%d",&n)){
        if(n==0){break;}

    while( n>0 ){


        while( n!=0 ){
            d = n%10;
            m = m+d;
            n = n/10;
            }
        if( m > 9 ){
            n = m;
            m = 0;
                }
    }

    printf("%d\n",m);
    m = 0;
    }
    return 0;

}
