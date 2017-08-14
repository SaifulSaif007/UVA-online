#include<stdio.h>
int main()

{

    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int k,j;
        int array[100];
        scanf("%d",&k);
        for(j=0;j<k;j++){
            scanf("%d",&array[j]);
        }
        printf("Case %d: %d\n",i,array[j/2]);

    }
    return 0;
}
