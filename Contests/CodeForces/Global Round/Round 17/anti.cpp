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
        ll n,m;
        cin>>n>>m;
        if(n==1&&m==1) cout<<"0"<<endl;
        else if(min(n,m)==1) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}
