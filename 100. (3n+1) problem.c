#include<stdio.h>
int main()
{
    int i,j,k,n,m,l,x;
    while(scanf("%d%d",&n,&m)==2){

        printf("%d %d ",n,m);
        x= 0;
        if(n>m){
            k = n;
            n = m;
            m = k;
        }
        for(i=n;i<=m;i++){
            l=1;
            j=i;
            while(j>1){
                if(j%2==0)
                    j = j/2;
                else
                    j=(3*j+1);
                    l++;
            }
            if(l>=x)
                x = l;
        }
        printf("%d\n",x);
    }
    return 0;
}
