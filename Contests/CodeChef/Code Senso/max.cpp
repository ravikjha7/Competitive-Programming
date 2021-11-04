#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++) cin>>arr[i];
        for(ll i=0;i<n;i++)
        {
            ll ans = 0;
            if(i>0) ans = max(ans , arr[i]&arr[i-1]);
            if(i<n-1) ans = max(ans , arr[i]&arr[i+1]);
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    return 0;
}