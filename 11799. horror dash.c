#include<stdio.h>

int main()
{
    int n,i,max,a,m,j;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        max = 0;
        scanf("%d",&a);
        for(j=1;j<=a;j++){
            scanf("%d",&m);
            if(m>max)
                max = m;
        }
        printf("Case %d: %d\n",i,max);
    }

    return 0;
}
