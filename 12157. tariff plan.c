#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
    int array[10000],input = 0;
     int mile =0 ,juice = 0;
        scanf("%d",&input);
        for(j=1;j<=input;j++){
            scanf("%d",&array[j]);
            mile +=((array[j]/30)+1)*10;
            juice += ((array[j]/60)+1)*15;
        }

         if(mile < juice){
            printf("Case %d: Mile %d\n",i,mile);
         }
         else if(juice < mile){
            printf("Case %d: Juice %d\n",i,juice);
         }
         else
            printf("Case %d: Mile Juice %d\n",i,mile);
    }
    return 0;
}
