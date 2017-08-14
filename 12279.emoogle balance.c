#include<stdio.h>

int main()
{

    int n,i,k=0;
    int a[1000];

    while(scanf("%d",&n)==1){
        if(n==0)    break;
        int zero = 0, non_zero = 0;

        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
            if(a[i]==0){zero++;}
            else if(a[i]>0){non_zero++;}
        }
        k++;
        printf("Case %d: %d\n",k,(non_zero-zero));
    }
    return 0;
}
