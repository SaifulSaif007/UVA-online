#include<iostream>
using namespace std;

int main()
{
    int n,m;

     char a[200];

    cin>>m;
    for(int k=1;k<=m;k++){
      int Bangladesh =0, World =0, Tie =0, Abandond=0;

    cin>>n>>a;

    for(int i=1;i<=n;i++){
        if   (a[i]=='B')    Bangladesh++;
        else if(a[i]=='W')  World++;
        else if(a[i]=='T')  Tie++;
        else if(a[i]=='A')  Abandond++;
    }

    cout<<"Case "<<k<<": ";

    if(Abandond==n)   {cout<< "ABANDONED" << endl;}
    else if(Bangladesh==World) {cout<< "DRAW " << Bangladesh <<" "<<World <<endl;}

    else if((Bangladesh>World)&& (Tie!=0))  {cout<< "BANGLADESH " << Bangladesh<<"-" <<World <<endl;}
    else if((World>Bangladesh)&&(Tie!=0)) {cout<< "WWW " << World << "-" <<Bangladesh <<endl;}
    else if ((Bangladesh+Abandond)==n) {cout<< "BANGLAWASH" <<endl;}
    else if((World+Abandond)==n) {cout<< "WHITEWASH"  <<endl;}
    else if(Bangladesh>World && Bangladesh+World+Abandond==n) {cout<< "BANGLADESH " << Bangladesh<<"-" <<World <<endl;}
    else if(World>Bangladesh && Bangladesh+World+Abandond==n) {cout<< "WWW " << World << "-" <<Bangladesh <<endl;}

    }

    return 0;
}
