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
        ll maxm = 0,minm = INT_MAX;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            maxm = max(arr[i],maxm);
            minm = min(minm,arr[i]);
        }
        cout<<maxm-minm<<endl;

    }
    return 0;
}