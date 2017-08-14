#include<stdio.h>

int main()
{
   int n,a,b,c,d,m,i,j;
   int up,down,l;

   scanf("%d",&n);

   for(i=1;i<=n;i++){
    scanf("%d",&a);
    up = 0;
    down = 0;
    l = 0;
        for(j=0;j<a;j++){
            scanf("%d",&b);
            if(j>0){
                l = c-b;
            }
         if(l>0){
            up++;
         }
         else if(l<0){
            down++;
         }
          c = b;
        }
        printf("Case %d: %d %d\n",i,down,up);


   }
    return 0;
}
