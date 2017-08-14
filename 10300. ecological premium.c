#include<stdio.h>
int main()
{
    int n,i,j,a,b,c,m,s;
    while(scanf("%d",&n)==1)
    {
        for(j=0;j<n;j++){
       scanf("%d",&m);
       s = 0;
       for(i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&c);
        s+= a*c;
       }
       printf("%d\n",s);
       }
    }

    return 0;
}
