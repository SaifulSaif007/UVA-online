#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1){
    if(n==0)    break;
    int result = 0;
    while(n>=3){

    result += n/3;
    n = n/3 + n%3;
    }
    if(n%3==2) result++;
    printf("%d\n",result);
    }
    return 0;
}
