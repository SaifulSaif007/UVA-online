#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float t1,t2,td,d,u,v;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f %f %f",&d,&v,&u);

        if(v==0|| u==0 || v>=u){
            printf("Case %d: can't determine\n",i);
        }
        else{
            t1 = d/u;
            t2 = d/ sqrt(u*u-v*v);
            td = fabs(t2-t1);
            printf("Case %d: %.3f\n",i,td);
        }
}
    return 0;
}

