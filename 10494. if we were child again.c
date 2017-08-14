#include<stdio.h>

int main()
{
    long long int n,l,a;
    char m;

    while(scanf("%lld %c %lld",&n,&m,&l)==3){
    if(m=='/'){
        a = n/l;
    }
    else if(m=='%'){
        a = n%l;
    }
    printf("%lld\n",a);
    }
    return 0;
}
