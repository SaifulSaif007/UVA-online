#include <stdio.h>
#include <string.h>

int valid;

int main()
{
    signed long int a,b,c;
    int n;
    int i,j;


    scanf("%d",&n);

    for(j=1;j<=n;j++){
        scanf("%ld %ld %ld",&a,&b,&c);

        if((a+b)<=c || (a+c)<=b || (c+b)<=a){
            printf("Case %d: %s",j,"Invalid\n");
        }

        else if(a<=0 || b<=0 || c<=0){
            printf("Case %d: %s",j,"Invalid\n");
        }

        else if((a==b)&&(b==c)){
            printf("Case %d: %s",j,"Equilateral\n");
        }

        else if((a==b || b==c || c==a)){
           printf("Case %d: %s",j,"Isosceles\n");
        }



        else{
            printf("Case %d: %s",j,"Scalene\n");
        }

    }

    return 0;
}
