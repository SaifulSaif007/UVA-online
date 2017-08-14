#include<stdio.h>

int main()
{
    int n,i,count=0;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        double length=0, width=0, depth=0, weight=0;
        scanf("%lf %lf %lf %lf",&length,&width,&depth,&weight);
        if( ((length<=56) && (width<=45) && (depth<=25) || ((length+width+depth)<=125)) && (weight<=7)  )
        {
            printf("1\n");
            count++;
        }
        else {
            printf("0\n");

         }
    }
    printf("%d\n",count);
    return 0;
}
