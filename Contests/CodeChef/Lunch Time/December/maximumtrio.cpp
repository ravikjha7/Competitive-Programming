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
        for(ll i=0; i < n ;i++) cin>>arr[i];
        sort(arr,arr+n);
        ll ans = max((arr[n-1]-arr[0])*arr[n-2],(arr[n-2]-arr[0])*arr[n-2]);
        cout<<ans<<endl;
    }
    return 0;
}