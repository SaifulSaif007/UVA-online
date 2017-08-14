#include<stdio.h>
int main()
{
    int i,m,n,p,q,j,k;

    scanf("%d",&m);
    for(i=1;i<=m;i++){
    scanf("%d %d %d",&n,&p,&q);
    int array[n];

    for(j=1;j<=n;j++){
        scanf("%d",&array[j]);
    }
    int sum=0, rslt=0;
    for(k=1;k<=n;k++){
        sum = sum + array[k];

        if(sum>q || rslt>=p)
            break;
            rslt++;
    }
    printf("Case %d: %d\n",i,rslt);
    }
    return 0;
}
