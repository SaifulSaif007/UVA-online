#include <stdio.h>
#define SIZE 2010
#define MAX 9999999

int cost[SIZE][3], d[SIZE];
int v, e;
int BellmanFord();
void relax(int ,int ,int);

int main()
{
    int i, possible,n,a;
    int c;
    scanf("%d",&n);
    for(a=1;a<=n;a++){

    scanf("%d %d ", &v, &e);

    for (i = 1; i <= e; i++)
    {
        scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
    }

    possible = BellmanFord();

    if(possible)
    {
        printf("not possible\n");

    }
    else
    {
        printf("possible\n");
    }
}
    return 0;
}

int BellmanFord()
{
    int i, j;
    for (i = 1; i <= v; i++)
    {
        d[i] = MAX;
    }

    for (i = 1; i<= v-1 ; i++)
    {
        for (j = 1; j<=e ; j++)
        {
            relax(cost[j][0], cost[j][1], e);
        }
    }

    int u, v,c;
    for (i = 1; i<=e ; i++)
    {
        u = cost[i][0];
        v = cost[i][1];

        if (cost[i][0] == u && cost[i][1] == v)
        {
          c =   cost[i][2];
        }

        if( d[u] + c < d[v])
        {
            return 0;
        }
}
    return 1;
}


void relax(int u, int v,int e)
{
    int i,c;
     for (i = 1; i <= e; i++)
    {
        if (cost[i][0] == u && cost[i][1] == v)
        {
          c =   cost[i][2];
        }
    }

    if (d[v] > d[u] + c )
    {
        d[v] = d[u] + c;
    }
}

