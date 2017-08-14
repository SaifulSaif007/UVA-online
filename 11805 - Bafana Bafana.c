#include <stdio.h>

int main()
{
    int n,k,p;
    int i,j,a,b,c,t;

    scanf("%d",&t);

    for(j=1;j<=t;j++){
        scanf("%d %d %d",&n,&k,&p);
        a=1;

       for(i=1;i<=p;i++){
            k++;
            if(k>n){
                k=1;
            }
       }


        printf("Case %d: %d\n",j,k);
    }

    return 0;
}
