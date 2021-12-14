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
        int x,y,p,q;
        cin>>x>>y>>p>>q;
        if((x+(10*p))<(y+(10*q))) cout<<"Chef"<<endl;
        else if((x+(10*p))>(y+(10*q))) cout<<"Chefina"<<endl;
        else cout<<"Draw"<<endl;
    }
    return 0;
}
