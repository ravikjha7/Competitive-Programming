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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        char ans[n];
        for(ll i=k;i<n;i++) ans[i] = s[i];
        int flag = 1;
        ll start = 0,end = k-1;
        for(ll i=1;i<=k;i++)
        {
            if(flag)
            {
                ans[k-i] = s[start++];
                flag = 0;
            }
            else
            {
                ans[k-i] = s[end--];
                flag = 1;
            }
        }
        for(ll i = 0;i < n ;i++) cout<<ans[i];
        cout<<endl;
    }
    return 0;
}