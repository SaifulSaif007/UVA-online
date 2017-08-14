#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

 int main()
{
    string s,t;
    int l_s,l_t,i,j,k;

    while(cin>>s>>t)
{
    l_s = s.length();
    l_t = t.length();
    k = 0;
    for(i=0;i<l_s;i++){
        for(j=0;j<l_t;j++){
          if(s[i]==t[j])
          {
            k = k+1;
            i++;
            }
        }
    }
    if(k==l_s) {printf("Yes\n");}
        else  {printf("No\n");}
    }
    return 0;
}


