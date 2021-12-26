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
        string s;
        cin>>s;
        ll count = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='N') count++;
        }
        if(count==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
