#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Devang Bhaiya Ki Jai
// Hail Lord Devang Bhaiya

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,count=0;
        cin>>n>>m;
        if(m==0) cout<<(n*(n+1))/2<<endl;
        else if(m==n) cout<<"0"<<endl;
        else 
        {
            ll p = (n-m)/(m+1);
            // Kitne ka hissa milega
            ll r = (n-m)%(m+1);
            // Kitne logo ko jyada milega always 1
            count += (p*(p+1)/2)*(m+1-r);
            // Kam waalo ka
            p++;
            count += (p*(p+1)/2)*(r);
            cout<<count<<endl;
        }
    }
    return 0;
}