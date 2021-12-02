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
        ll arr[n];
        vector<ll> sorted(n,0);
        
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            sorted[i] = arr[i];
        }
        sort(sorted.begin(),sorted.end(),greater<ll>());
        // vector<ll> v(1000001,0);
        multimap<ll,ll> map;
        ll k = 1;
        ll ans = 0;
        for(ll i=0;i<n;i++)
        {
            // v[sorted[i]] = k;
            map.insert({sorted[i],k});
            ans += (sorted[i]*2*k);
            i++;
            if(i<n)
            {
                // v[sorted[i]] = -k;
                map.insert({sorted[i],-k});
                ans += (sorted[i]*2*k);
            }
            k++;
        }
        cout<<ans<<endl;
        cout<<"0 ";
        for(ll i=0;i<n;i++)
        {
            // cout<<v[arr[i]]<<" ";
            auto itr = map.find(arr[i]);
            cout<<itr->second<<" ";
            map.erase(itr);
        }
        cout<<endl;
    }
    return 0;
}