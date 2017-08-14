#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,l;
    char s[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",s);
        l = strlen(s);

        if(strcmp(s,"1")==0 || strcmp(s,"4")==0 || strcmp(s,"78")==0)
           printf("+\n");
        else if(s[l-1]=='5' && s[l-2]=='3')
            printf("-\n");
        else if(s[0]=='9' && s[l-1]=='4')
            printf("*\n");
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            printf("?\n");
        else
           printf("+\n");
    }
    return 0;
}
