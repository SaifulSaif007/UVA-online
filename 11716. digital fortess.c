#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,l,j,k,sr1;
    float sr2;
    char s[10000];
    while(scanf("%d",&n)==1){
    scanf("\r");
    for(i=0;i<n;i++){
    gets(s);
     l = strlen(s);
     sr1 = sqrt(l);
     sr2 = sqrt(l);

      if(sr1==sr2)
        for(j=0;j<sr1;j++)
        for(k=j;k<l;k+=sr1)
            printf("%c",s[k]);
        else
            printf("INVALID");
        printf("\n");
    }
     }

    return 0;
}
