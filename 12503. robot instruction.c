#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,k;
    int p[100000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){

    int ins;
    char s[1000];
    scanf("%d",&ins);

    for(j=1;j<=ins;j++){
       scanf("%s",&s);
        if(strcmp(s,"LEFT")==0){
                p[j]=-1;
        }
        else if(strcmp(s,"RIGHT")==0){
                p[j]=1;
        }
        else
          { scanf("%s %d",&s,&k);
            p[j] = p[k];
            }
    }
    int sum = 0;
    for(j=1;j<=ins;j++){
        sum = sum + p[j];
    }
    printf("%d\n",sum);
    }

    return 0;
}

