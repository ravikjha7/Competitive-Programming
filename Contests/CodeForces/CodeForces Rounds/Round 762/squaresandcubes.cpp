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
        ll s = sqrt(n);
        ll c = cbrt(n);
        map<ll,ll> m;
        for(ll i=1;i<=s;i++)
        {
            if(m.find(i*i)==m.end()) m.insert({i*i,1});
        }
        for(ll i=1;i<=c;i++)
        {
            if(m.find(i*i*i)==m.end()) m.insert({i*i*i,1});
        }
        cout<<m.size()<<endl;
    }
    return 0;
}