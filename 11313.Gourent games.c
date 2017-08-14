#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if((a-1)%(b-1)!=0){
            printf("cannot do this\n");
        }
        else
            printf("%d\n",(a-1)/(b-1));
    }
    return 0;
}
