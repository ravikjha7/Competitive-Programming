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
        int n,m;
        cin>>n>>m;
        string s = "";
        if(m>n)
        {
            for(int i=0;i<n+1;i++) s += "10";
            for(int i=0;i<m-n-1;i++) s += "110";
            s += "1";
        }
        else if(m<n)
        {
            for(int i=0;i<m;i++) s += "01";
            for(int i=0;i<n-m;i++) s += "010";
        }
        else
        {
            for(int i=0;i<n+1;i++) s += "01";
        }
        cout<<s.size()<<"\n";
        cout<<s<<"\n";
    }
    return 0;
}