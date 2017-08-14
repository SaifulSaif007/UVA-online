#include<stdio.h>
#include<stdlib.h>

int a[10][10],list[20],stack[20],ind[20],s,k=0,top=-1,n;

void topsort(int n,int a[10][10])
{
  int i,j;
  for(i=1;i<=n;i++)
{
   s=0;
    for(j=1;j<=n;j++)
{
   s = s+a[j][i];
}
   ind[i]=s;
 }

   for(i=1;i<=n;i++)
   {
   if(ind[i]==0)
   stack[++top]=i;
  }
    while(top!=-1)
    {
    i=stack[top--];
    list[k++]=i;
    for(j=1;j<=n;j++)
    {
    if(a[i][j]==1)
    {
    ind[j]--;
    if(ind[j]==0)
    stack[++top]=j;
     }
  }
 }
}

void Input()
    {
    int i,j,v1,v2,e;
    n=0;e=0;
    for(i=1; ;i++){
    scanf("%d%d",&v1,&v2);
    a[v1][v2]=1;
    if(v1==0 && v2==0){break;}
    n++,e++;
    }
}

    int main()
{
    int i;
    Input();
    topsort(n,a);
    printf("Topological sorted vertices are\n");
    for(i=0;i<n;i++)
    printf("%d ",list[i]);



    return 0;
}
