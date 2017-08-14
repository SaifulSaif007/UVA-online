#include<stdio.h>
int main()
{
    long int a,b,c,d,l,fn,i,count;

    while(scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&l)==5)
    {

        if(a==0 &&b==0 && c==0 &&d==0 &&l==0){
            break;
        }

        count = 0;
        for(i=0;i<=l;i++)
     {
        fn = (i*i*a) + (i*b) + c;
        if(fn%d==0)
            count++;
    }
        printf("%ld\n",count);
    }
    return 0;
}
