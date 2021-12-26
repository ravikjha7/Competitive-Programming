#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll noofdiv(ll n)
{
    if(n==1 || n==2) return n;
    ll r = sqrt(n);
    ll count = 0;
    for(ll i=1;i<=r;i++)
    {
        if(n%i==0) count += 2;
    }
    if(r*r==n) count--;
    return count;
}

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
        cout<<noofdiv(n-1)<<endl;
    }
    return 0;
}
