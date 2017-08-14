#include<stdio.h>
int main()
{

    int n,i=1;
    scanf("%d",&n);
    while(n--){
        float a,b;
        scanf("%f %f",&a,&b);

        printf("Case %d: %.2f\n",i,a+(b*5)/9);
        i++;
    }
    return 0;
}

