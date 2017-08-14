#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,count=0;
    char s[100];

    while(gets(s)){
    l = strlen(s);


    for(i=0;i<l;i++){
       if(s[i]=='"'){
        count++;
        if(count%2==1)
              printf("``");
                else
                printf("''");
        }
        else
            printf("%c",s[i]);

    }
    printf("\n");
    }
    return 0;
}
