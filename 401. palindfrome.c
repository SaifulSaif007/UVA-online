#include<stdio.h>
#include<string.h>

    int main()
{
    char str[100], rev[100];
    int ln,i,j;
    scanf("%s",str);
    ln=strlen(str);
    j=0;

    for(i=ln-1;i>=0;i--)
       {
        rev[j]=str[i];
        j++;
        }
    rev[j] = '\0';

    if(strcmp(str,rev)==0)
 {
    for(i=0;i<ln;i++){
        printf("%c",str[i]);
    }
        printf("Palindrome");
}
    else
        printf("not palindrome");
    return 0;
}

