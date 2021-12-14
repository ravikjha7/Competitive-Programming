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
        ll curr = arr[n-1];
        ll count =0;
        for(ll i=n-1;i>=0;i--)
        {
            if(arr[i]>curr)
            {
                count++;
                curr = arr[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}