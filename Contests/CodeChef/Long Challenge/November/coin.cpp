#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if((x + (2*y))%2!=0)
            cout<<"NO"<<endl;
        else if(y%2!=0 && x<2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}