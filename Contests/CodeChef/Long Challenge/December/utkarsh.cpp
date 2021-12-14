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
        char f,s,t,x,y;
        cin>>f>>s>>t>>x>>y;
        if(x==f||y==f) cout<<f<<endl;
        else cout<<s<<endl;
    }
    return 0;
}
