#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000],b[1000];
    int n,i,j;

    while(gets(a)){

    n=strcmp("DONE",a);
    if(n==0)
        break;
    i=0;j=0;
    for(i=0;a[i]!=NULL;i++)
    {
    if((a[i]>='a'&&a[i]<='z'))
    {
        a[j]=a[i];
        j++;
    }
    else if(a[i]>='A'&&a[i]<='Z')
    {
        a[j]=a[i]+32;
        j++;
    }

}
    a[j]=NULL;
    j=j-1;
    for(i=0;a[i]!=NULL;i++)
    {
        b[i]=a[j];
        j--;
    }
    b[i]=NULL;
    n=strcmp(a,b);
    if(n==0)
        printf("You won't be eaten!\n");
    else
        printf("Uh oh..\n");
    }

    return 0;
}
