#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
       int l1=0,l2=0,yes=0;
        char s1[100], s2[100];
       scanf("%s",&s1);
       scanf("%s",&s2);
       l1 = strlen(s1);
       l2 = strlen(s2);
       if(l1!=l2){
        printf("No\n");
       }
       else

           for(j=0;j<l1;j++){
            if(s1[j]!=s2[j]){
                if(s1[j]=='a' || s1[j]=='e'||s1[j]=='i' || s1[j]=='o'|| s1[j]=='u'){
                    if(s2[j]=='a' || s2[j]=='e'||s2[j]=='i' || s2[j]=='o'|| s2[j]=='u')
                        yes = 1;
        else
      {printf("No\n");
      break;}
     }

    else
     {printf("No\n");
     break;}
    }
   if(j==l1-1)
   {printf("Yes\n");
   break;}
   }

    }
return 0;
}


