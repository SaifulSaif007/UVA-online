#include<stdio.h>
#include<string.h>

int main()
{
   int l1,l2,i,j,count,add;
   int a,b,r_a,r_b;
   while(scanf("%d %d",&a,&b)==2){
        if(a==0 && b==0){
            break;
        }
        add = 0;
        count = 0;
        while(a>0 || b>0){
            r_a = a%10;
            a = a/10;
            r_b = b%10;
            b = b/10;

            if((r_a + r_b)+ add >=10)
            {
                add = 1;
                count++;
                }
                else
                    add = 0;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("%d carry operation.\n",count);
        else
            printf("%d carry operations.\n",count);
   }
   return 0;
}
