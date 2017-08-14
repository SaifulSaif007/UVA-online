#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,l,j;
    char s[1000];
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%s",s);

while(gets(s)!='\0'){

    l= strlen(s);
    if(l==0)break;

    for(j=0;j<l;j++){

         if(s[j]=='3')
        printf("E");
     else if(s[j]=='0')
        printf("O");
     else if(s[j]=='1')
        printf("I");
     else if(s[j]=='4')
        printf("A");
     else if(s[j]=='9')
        printf("P");
     else if(s[j]=='8')
        printf("B");
     else if(s[j]=='7')
        printf("T");
     else if(s[j]=='5')
        printf("S");
     else if(s[j]=='2')
        printf("S");
     else if(s[j]=='6')
        printf("G");

     else
        printf("%c",s[j]);
    }
    printf("\n");
}

    }


    return 0;
}

