#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], t[100];
    int l_s,l_t,i,j,k;

    while(scanf("%s %s",&s,&t)==2){
    l_s = strlen(s);
    l_t = strlen(t);
    k = 0;
    for(i=0;i<l_s;i++){
        for(j=0;j<l_t;j++){
          if(s[i]==t[j])
          {
            k=k+1;
            i++;
            }
        }
    }
    if(l_s==k)
    {
        printf("Yes\n");
    }
        else
    {
        printf("No\n");
    }
 }
    return 0;
}
