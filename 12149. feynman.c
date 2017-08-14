#include<stdio.h>
int main()
{
    int n,s,i;
    int sum = 0;
    while(scanf("%d",&n)==1){

        if(n==0){
            break;
        }

        for(i=n;i>0;i--){
            sum = sum+ i*i;
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
