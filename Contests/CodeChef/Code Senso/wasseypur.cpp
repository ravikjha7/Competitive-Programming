#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll ans = 1;
        for(ll i=1;i<n;i++){
        if(s[i]==s[i-1]) continue;
        else ans++;
    }
    if(ans%3==2) cout<<"RAMADHIR"<<"\n";
    else cout<<"SAHID"<<"\n";
    }
    return 0;
}