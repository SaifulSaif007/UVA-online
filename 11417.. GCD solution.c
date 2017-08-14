#include<stdio.h>

int GCD(int a,int b){
    int t;
         while (b!=0){
            t=b;
            b=a%b;
            a=t;
            }
            return(a);
}

int main()
{
    int i,j,N;
    while(scanf("%d",&N) && N!=0){

        long G=0;
        for(i=1;i<N;i++)
        for(j=i+1;j<=N;j++)
        {
            G+=GCD(i,j);
        }
        printf("%ld\n",G);
    }

    return 0;
}
