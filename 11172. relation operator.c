#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%d %d",&j,&k);
        if(j==k){printf("=\n");}
        else if(j>k){printf(">\n");}
        else{printf("<\n");}
            }
            return 0;

}
