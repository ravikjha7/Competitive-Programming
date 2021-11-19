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
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(a==p && b==q){
            cout<<"0"<<endl;
            continue;
        }
        int s = a+b;
        int r = p+q;
        if(r%2==s%2) cout<<"2"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}