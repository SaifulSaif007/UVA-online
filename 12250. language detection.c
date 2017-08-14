#include<stdio.h>
#include<string.h>

int main()
{
    int n,l,i=1;
    char ch[100];
    while(scanf("%s",&ch)!=EOF){
    if(strcmp(ch,"#")==0){
        break;
    }

   else if(strcmp(ch,"HELLO")==0){
    printf("Case %d: ENGLISH",i);
    }
    else if(strcmp(ch,"HOLA")==0){
        printf("Case %d: SPANISH",i);
    }
    else if(strcmp(ch,"HALLO")==0){
        printf("Case %d: GERMAN",i);
    }
    else if(strcmp(ch,"BONJOUR")==0){
        printf("Case %d: FRENCH",i);
    }
    else if(strcmp(ch,"CIAO")==0){
        printf("Case %d: ITALIAN",i);
    }
    else if(strcmp(ch,"ZDRAVSTVUJTE")==0){
        printf("Case %d: RUSSIAN",i);
    }
    else
    {
        printf("Case %d: UNKNOWN",i);
    }
    printf("\n");
    i++;
    }
     return 0;
}


