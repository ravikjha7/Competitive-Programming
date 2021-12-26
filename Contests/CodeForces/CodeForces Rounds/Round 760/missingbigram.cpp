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
        int n;
        cin>>n;
        vector<string> v(n);
        for(int i=0;i<n-2;i++) cin>>v[i];
        int count = 0;
        cout<<v[0];
        for(int i=1;i<n-2;i++)
        {
            if(v[i][0]==v[i-1][1]) cout<<v[i][1];
            else
            {
                count++;
                cout<<v[i];
            }
            // cout<<count<<" ";
        }
        if(count==0) cout<<"a";
        cout<<endl;
    }
    return 0;
}