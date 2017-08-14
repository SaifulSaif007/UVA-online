#include <stdio.h>

int main()
{
    int e,f,c;
    int n,sum=0;
    int j,i;
    int g,h;

    scanf("%d",&n);

    for(j=1;j<=n;j++){
        scanf("%d %d %d",&e,&f,&c);
        sum=0;
        e = e+f; //e = 5+5
        g=e/c;   //g = 10/2=5
        h=e%c;   //h = 10%2=0
        sum += g; // sum += 5

        f=g+h;    //f = 5+0

        while(f>=c){  //
            g = f/c;
            h = f%c;
            sum += g;
            f = g+h;
        }
        printf("%d\n",sum);
    }

    return 0;
}









/*
#include <stdio.h>

int main()
{
    int e,f,c;
    int n,sum=0;
    int j,i;
    int g,h;

    scanf("%d",&n);

    for(j=1;j<=n;j++){
        scanf("%d %d %d",&e,&f,&c);
        sum=0;
        e = e+f;
        g=e/c;
        h=e%c;
        sum += g;

        f=g+h;

        while(f>=c){
            g = f/c;
            h = f%c;
            sum += g;
            f = g+h;
        }
        printf("%d\n",sum);
    }

    return 0;
}
*/
