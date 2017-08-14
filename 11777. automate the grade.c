#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    int     j;
    int Ct,Total;
    int Case;
    int m=0,n;

    scanf("%d",&Case);

    for(j=1;j<=Case;j++){

    scanf("%d %d %d %d" "%d %d %d",&a,&b,&c,&d,&e,&f,&g);

    m = e+f+g;

    if(e<=f && e<=g){
        n=e;}

    else if(f<=e && f<=g){
        n=f;}

    else if(g<=e && g<=f)
        {n=g;}

     Ct = (m-n)/2;

    Total = Ct+a+b+c+d;

    if(Total >= 90){
            printf("Case %d: A\n",j);}

    else if(Total >=80 ){
            printf("Case %d: B\n",j);}

    else if(Total >=70 ){
            printf("Case %d: C\n",j);}

    else if(Total >=60 ){
            printf("Case %d: D\n",j);}

    else if(Total <60){
            printf("Case %d: F\n",j);}

    }

return 0;

    }


