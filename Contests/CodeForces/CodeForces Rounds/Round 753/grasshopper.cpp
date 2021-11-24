#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,n;
        cin>>x>>n;
        ll r = n%4;
        if(x%2==0)
        {
            if(r==0)
            cout<<x<<endl;
            else if(r==1)
            cout<<x-n<<endl;
            else if(r==2)
            cout<<x+1<<endl;
            else
            cout<<x+n+1<<endl;
        }
        else
        {
            if(r==0)
            cout<<x<<endl;
            else if(r==1)
            cout<<x+n<<endl;
            else if(r==2)
            cout<<x-1<<endl;
            else
            cout<<x-n-1<<endl;
        }
    }
    return 0;
}