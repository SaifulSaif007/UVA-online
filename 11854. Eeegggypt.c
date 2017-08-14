#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k;
    while(    scanf("%d %d %d",&i,&j,&k)){
            if(i==0 && j==0 && k==0){
            break;
    }
        if(i==0 && j==0 && k==0){printf("wrong\n");}

        else if(i*i +j*j ==k*k) {printf("right\n");}
        else if (i*i +k*k ==j*j)  {printf("right\n");}
        else if (k*k +j*j ==i*i) {printf("right\n");}

        else{printf("wrong\n");}

    }

return 0;
}
