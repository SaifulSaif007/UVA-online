#include<stdio.h>
int main()
{
    int i,j,n,ans;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        scanf("%d",&n);
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n/=10;
        ans=n%10;
        if(ans<0){
            ans*=-1;
        }
       printf("%d\n",ans);
    }
    return 0;
}
