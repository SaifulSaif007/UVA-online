#include<stdio.h>
int main()
{
    long long a,n,i,c=0,b;

    while(scanf("%lld %lld",&a,&n)==2)
    {
        if(a == -1 && n == -1){
            break;
        }
        c++;
        b = a;

    for(i=1; ; i++){

        if(a==1){
            break;
        }
        else if(a%2==0){
            a = a/2;
        }
        else if(a%2 !=0)
        {
            a = (3*a) + 1;
        }
        if(a>n){
            break;
        }

    }
    printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",c,b,n,i);
}

    return 0;
}
