#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j;
    char s[1000];
    scanf("%d",&n);
    getchar ();

    for(i=1;i<=n;i++){
    int length = 0,F=0,M=0;

    gets(s);
    length = strlen(s);

        for(j=0;j<length;j++){
            if(s[j]=='F')
            {
                F++;
            }
            else if(s[j]=='M')
            {
                    M++;
            }
        }

    if(F==M && F>1 && M>1){
            printf("LOOP\n");
        }

    else
            printf("NO LOOP\n");
    }
    return 0;
}
