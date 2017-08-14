#include<stdio.h>
int main()
{
    int i,n;
    int a,b,c;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a>=b+c) || (b>=a+c) || (c>=a+b))
        {
            printf("Wrong!!");

        }
        else{

             printf("OK");
        }
        printf("\n");
    }
    return 0;
}

