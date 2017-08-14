#include<stdio.h>

int main()
{
    int a,b,c,e,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        e=c*(a+(a-b))/(a+b);
        if(e<=0){
            printf("0\n");
        }
        else{
            printf("%d\n",e);
        }
    }
    return 0;
}
