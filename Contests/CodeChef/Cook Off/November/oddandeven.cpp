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
        int a,b;
        cin>>a>>b;
        if((a+b)%2!=0) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}