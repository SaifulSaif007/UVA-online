#include <stdio.h>
#include <math.h>

int main()
{
    long long int a,b,c,sum;
    int i,j;



    while(scanf("%lld %lld %lld",&a,&b,&c)){
        if(a== 0 && b==0 && c==0){
            break;
        }

        else if(a== 0 || b==0 || c==0){
            printf("wrong\n");
        }

        else if((a*a + b*b) == c*c){
            printf("right\n");
        }

        else if((a*a + c*c) == b*b){
            printf("right\n");
        }

        else if((c*c + b*b) == a*a){
            printf("right\n");
        }

        else
            printf("wrong\n");
    }

    return 0;
}
