#include<stdio.h>

int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int N=0,K=0,X=0;
        int sum=0,sub=0,ans = 0;
        scanf("%d %d %d",&N,&K,&X);

        for(j=1;j<=N;j++){
            sum = sum +j;
        }
        for(k=X,l=1; ;k++,l++){
            sub = sub + k;
            if(l==K) break;
        }
        ans = sum - sub;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
