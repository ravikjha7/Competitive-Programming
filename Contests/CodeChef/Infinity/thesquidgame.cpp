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
        ll minm = INT_MAX;
        ll sum = 0;
        for(ll i=0;i<n;i++) {
            cin>>arr[i];
            minm = min(minm,arr[i]);
            sum += arr[i];
        }
        cout<<sum-minm<<endl;

    }
    return 0;
}
