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
        ll w,h;
        cin>>w>>h;
        ll maxm = 0;
        for(int i=0;i<2;i++)
        {
            ll k;
            cin>>k;
            ll arr[k];
            for(ll i=0;i<k;i++)
            {
                cin>>arr[i];
            }
            maxm = max(h*(arr[k-1]-arr[0]),maxm);
        }
        for(int i=0;i<2;i++)
        {
            ll k;
            cin>>k;
            ll arr[k];
            for(ll i=0;i<k;i++)
            {
                cin>>arr[i];
            }
            maxm = max(w*(arr[k-1]-arr[0]),maxm);
        }
        cout<<maxm<<endl;
    }
    return 0;
}