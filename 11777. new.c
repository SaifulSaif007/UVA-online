 #include <stdio.h>
int main()
{
    int t1,t2,f,a,c1,c2,c3;
    int i,j;
    int n;
    int avg,total;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&c1,&c2,&c3);
        if(c1<=c2 && c1<=c3){
            avg = (c2+c3)/2;
        }
        else if(c2<=c1 && c2<=c3){
            avg = (c1+c3)/2;
        }
        else if(c3<=c2 && c3<=c1){
            avg = (c1+c2)/2;
        }
        total = t1+t2+f+a+avg;
        if(total >= 90){
            printf("Case %d: A\n",j);
        }
        else if(total >= 80){
            printf("Case %d: B\n",j);
        }
        else if(total >= 70){
            printf("Case %d: C\n",j);
        }
        else if(total >= 60){
            printf("Case %d: D\n",j);
        }
        else if(total < 60){
            printf("Case %d: F\n",j);
        }
    }
    return 0;
}
