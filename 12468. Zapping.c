#include<stdio.h>

int main()
{
    int a,b,min;

    while(scanf("%d %d",&a,&b)==2){
        if(a==-1 && b==-1){
            break;
        }
        min = abs(a - b);

        if(min>50){
            min = 100 - min;
        }

        printf("%d\n",min);
    }
    return 0;
}
