#include<stdio.h>

int main()
{

    int n,k,s;
    while(scanf("%d %d",&n,&k)==2){
        s = n + (n-1)/(k-1);
        printf("%d\n",s);
    }
    return 0;
}
