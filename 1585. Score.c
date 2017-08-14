#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,k,l,sum,m;
    char c[100];

    scanf("%d",&n);
    for(k=1;k<=n;k++){

       scanf("%s",c);
         l = strlen(c);

        for(i=0;i<l;i++){
            if(c[i]=='X')
                 c[i]=0;
            else if(c[i]=='O')
                c[i]=1;
        }
            sum =0,m=0;

        for(i=0;i<l;i++){
            if(c[i]==1)
               {m++;}
            else if(c[i]==0)
                {m=0;}

            sum = sum+m;
        }
        printf("%d\n",sum);
    }
    return 0;
}
