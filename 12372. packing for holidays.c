#include<stdio.h>
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>20 || b>20 || c>20){
            printf("Case %d: bad",i);

        }
            else{
                printf("Case %d: good",i);
            }
         printf("\n");

    }

    return 0;
}
