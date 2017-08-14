#include<stdio.h>

int main()
{
    int n,a,i,j,k,l,f;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&f);
        for(j=1;j<=f;j++)
            {
            for(k=1;k<=a;k++)
            {
                for(l=1;l<=k;l++)
                    {
                    printf("%d",k);
                }
                printf("\n");
            }

            for(k=a-1;k>=1;k--){
                for(l=k;l>=1;l--){
                    printf("%d",k);
                }
                printf("\n");
            }
           if(i!=n || j!=f) printf("\n");
        }
    }

return 0;
}
