#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,j,k,number,input,sum;
    scanf("%d",&n);


    for(i=1;i<=n;i++){
        scanf("%d",&input);
        number = input;
        int digit[1000];
        j = 0;
        while(number){
           digit[j++] = number % 10;
           number = number / 10;
        }

        sum = 0;
        for(k=0;k<j;k++){
            sum = sum + pow(digit[k],j);
        }

        if(sum == input) printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }

    return 0;
}
