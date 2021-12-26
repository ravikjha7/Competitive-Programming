#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2 == 0) cout<<n/2<<" "<<(n/2)-1<<" 1"<<endl;
        else
        {
            ll r = n/2;
            if(r%2 == 0) cout<<r+1<<" "<<r-1<<" 1"<<endl;
            else cout<<r+2<<" "<<r-2<<" 1"<<endl;
        }
    }
    return 0;
}