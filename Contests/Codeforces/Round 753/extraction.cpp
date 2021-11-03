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
        for(ll i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        ll maxm = arr[0],total=arr[0];
        for(ll i=1;i<n;i++)
        {
            arr[i] -= total;
            total += arr[i];
            maxm = max(arr[i],maxm);
        }
        cout<<maxm<<endl;
    }
    return 0;
}