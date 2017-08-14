#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,a;
    int sum=0;
    char s[100];

    scanf("%d",&n);

    for(i=1;i<=n;i++){
     scanf("%s",s);

     if(strcmp(s,"donate")==0){
        scanf("%d",&a);
        sum = sum+a;
     }
    else
        printf("%d\n",sum);
    }

    return 0;
}
