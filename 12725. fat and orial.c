#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int A=0,B=0;
        double M=0,N=0,grade =0;
        scanf("%lf %lf %d %d",&N,&M,&A,&B);
        grade = ((M*(A+B))-(N*A))/B;
        if(grade<0.00 || grade >10.00){
            printf("Case #%d: Impossible\n",i);
        }
        else
            printf("Case #%d: %.2lf\n",i,grade);
    }
    return 0;
}
