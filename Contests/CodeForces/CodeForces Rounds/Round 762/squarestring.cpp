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
        ll n;
        n = s.size();
        int flag = 1;
        if(n%2!=0) cout<<"NO"<<endl;
        else
        {
            for(int i=0;i<n/2;i++)
            {
                if(s[i]!=s[i+(n/2)])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
