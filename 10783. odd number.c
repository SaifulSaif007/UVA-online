#include <stdio.h>
int main()
{

    int num,i,k,l,c1=0;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d %d",&k ,&l);
        for(i=k;i<=l;i++){
            if(c1%2 !=0){c1=c1+i;}
        }
        printf("%d",c1);
    }

}


