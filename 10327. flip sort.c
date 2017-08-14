#include<stdio.h>
int main()
{
  int n,arr[10000],i,j,k,c;
  while(scanf("%d",&n)==1)
{
    for(i=1;i<=n;i++){
    scanf("%d",&arr[i]);
  }
    c=0;
    for(k=1;k<=n-1;k++){
        for(j=k+1;j<=n;j++){
            if(arr[k]>arr[j])
                c++;

        }
    }
    printf("Minimum exchange operations : %d\n",c);
}
  return 0;
}
