#include<stdio.h>

int main()
{
    int a,b,c;
    int cut;
    int  n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);

        if((a>b && b>c) || (c>b && b>a)){
            cut = b;
        }
        else if((b>a && a>c) || (c>a && a>b)){
            cut = a;
        }
        else if((a>c && c>b) || (b>c && c>a)){
            cut = c;
        }

        printf("Case %d: %d\n", i, cut);


    }
    return 0;

}
