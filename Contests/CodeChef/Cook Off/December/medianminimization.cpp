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
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        cout<<abs(arr[n/2]-arr[(n/2)-1])<<endl;
        // vector<ll> p,q;
        // for(int i=0;i<n;i++)
        // {
        //     if(i%2==0) p.push_back(arr[i]);
        //     else q.push_back(arr[i]);
        // }
        // ll ans;
        // if(q.size()==1)
        // ans = abs(p[(p.size()-1)/2] - q[(q.size()/2)]);
        // else
        // ans = abs(p[(p.size()-1)/2] - q[(q.size()/2)-1]);
        // cout<<ans<<endl;
    }
    return 0;
}