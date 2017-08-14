#include<stdio.h>

int main()
{
    int n,i,m,j,k,l,t,s=0;
    int arr[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        for(j=0;j<m;j++)
            {scanf("%d",&arr[j]);
            }

        for(k=0;k<m-1;k++)
                for(l=k+1;l<m;l++)
                if(arr[k]>arr[l])
        {
            t = arr[k];
            arr[k] = arr[l];
            arr[l] = t;
            s++;
        }

        printf("Optimal train swapping takes %d swaps.\n",s);
        s = 0;
    }

    return 0;
}
