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
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll maxm = 1,maxi = v[0];
        ll count=1;
        for(ll i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1] && i<n-2) count++;
            else
            {
                if(v[i]==v[i+1]) count++;
                if(maxm<count)
                {
                    maxm = count;
                    maxi = v[i];
                }
                count = 1;
            }
        }
        if(n==1 || maxm==n) cout<<"0"<<endl;
        else if(maxm==1) cout<<"-1"<<endl;
        else cout<<n-maxm+1<<endl;
    }
    return 0;
}