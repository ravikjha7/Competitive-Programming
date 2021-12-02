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
        ll n,l,r,k;
        cin>>n>>l>>r>>k;
        ll arr[n];
        for(ll i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        ll ans = 0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]>=l && arr[i]<=r && arr[i]<=k)
            {
                ans++;
                k -= arr[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
