#include<stdio.h>

int main()
{
    int n,i;
    int A,B,C;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lld%lld",&A,&B);
        C = A-B;
        printf("%lld\n",C);
    }

    return 0;
}

///java dia korte hobe.....
