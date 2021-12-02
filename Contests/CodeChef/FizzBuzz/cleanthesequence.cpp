#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Devang Bhaiya Ki Jai
// Hail Lord Devang Bhaiya!!!

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,temp;
        cin>>n>>k;
        vector<ll> v;
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            if(i==0) v.push_back(temp);
            else if(v.back()!=temp) v.push_back(temp);
        }
        ll size = v.size();
        vector<ll> ans(k+1,size-1);

        for(ll i=0;i<size;i++)
        {
            if(i>0) ans[v[i]]--;
            if(i<size-1) ans[v[i]]--;
            if(i>0&&i<size-1&&v[i+1]!=v[i-1]) ans[v[i]]++;
        }
        for(ll i=1;i<=k;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}