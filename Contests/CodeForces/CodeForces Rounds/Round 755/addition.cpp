#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll u,v;
        cin>>u>>v;
        cout<<0-(u*u)<<" "<<v*v<<endl;
    }
    return 0;
}
