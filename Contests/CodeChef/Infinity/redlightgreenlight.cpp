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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        ll count = 0;
        for(ll i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i]>k) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}