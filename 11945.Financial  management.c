#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    float sum,a,d;
    int c;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
         sum = 0;
        for(j=1;j<=12;j++){
        scanf("%f",&a);
        sum =sum+a;
    }
    sum = sum/12;

    if(sum>=1000){
        c = sum/1000;
        d = fmod(sum,1000);
        printf("%d $%d,%.2f\n",i,c,d);
    }

    else{
    printf("%d $%.2f\n",i,sum);
    }
    }

    return 0;
}
