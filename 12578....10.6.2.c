#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    int n,i;
    double len, red, grn;
    double l,w,r;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%lf",&len);
        w = (6*len)/10;
        r = (2*len)/10;

        red = pi*r*r;
        grn = len*w - red;

        printf("%.2lf %.2lf\n",red,grn);
    }
    return 0;
}
