#include<stdio.h>

int main()
{
    int n,i;
    float x,y,r;
    float X,Y,length;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        X=0;
        Y=0;
        length=0;

        scanf("%f %f %f",&x,&y,&r);
        length = sqrt((x*x)+(y*y));
        X = r-length;
        Y = r+length;

        printf("%.2f %.2f\n",X,Y);

    }

    return 0;
}
