#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,k;
        scanf("%lld %lld %lld",&n,&x,&k);
        ll a[n];
        ll b[n];
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
        }
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            if(abs(a[i]-b[i])<=k) count++;
        }
        if(count>=x) 
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}