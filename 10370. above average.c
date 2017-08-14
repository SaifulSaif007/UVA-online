#include<stdio.h>

int main()
{
    int n,i,a,l,j,k;
    float arr[1000];
    float sum,count,avrg,above;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum = 0,count =0;
    avrg = 0,above = 0;

    scanf("%d",&a);
    for(j=1;j<=a;j++){
        scanf("%f",&arr[j]);
    }
    for(k=1;k<=a;k++){
        sum = sum + arr[k];
    }
    avrg = sum/a;

    for(l=1;l<=a;l++){
        if(arr[l]>avrg)
            count++;
    }
        above = (count*100)/a;
        printf("%.3f%%\n",above);

    }

    return 0;
}
