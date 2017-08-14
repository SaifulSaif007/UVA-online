#include<stdio.h>

int main()
{
    int a,b,c,d,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    scanf("%d %d",&a,&b);
    if((a>=b) && (a+b)%2==0){
        c = (a+b)/2;
        d = c-b;
        printf("%d %d\n",c,d);
}
    else
    printf("impossible\n");

}
    return 0;
}
