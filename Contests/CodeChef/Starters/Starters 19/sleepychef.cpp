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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                count++;
                if(count==k)
                {
                    ans++;
                    count=0;
                }
            }
            else count=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}