#include<stdio.h>

int main()
{
    int a,x;
    while(scanf("%d",&a)==1){
        x = a%6;
        if(x==0)
        printf("Y\n");
        else
        printf("N\n");
    }

    return 0;
}
