#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,l;
    char s[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",&s);
        l = strlen(s);

        if(l==5){
            printf("3\n");
        }
        else if(l==3){
            if((s[0]=='t' && s[2]=='o')||(s[0]=='t' && s[1]=='w')|| (s[1]=='w' && s[2]=='o'))
               printf("2\n");

        else
            printf("1\n");
        }
    }
    return 0;
}
