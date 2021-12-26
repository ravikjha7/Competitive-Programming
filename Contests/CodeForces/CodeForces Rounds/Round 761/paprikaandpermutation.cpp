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
        ll n;
        cin>>n;
        set<ll> s;
        for(int i=0;i<n;i++) s.insert(i+1);
        ll temp;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(s.find(temp)!=s.end()) s.erase(temp);
            else v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int count = 0;
        int flag = 1;
        for(int i : s)
        {
            if(i*2>=v[count++]) flag = 0;
        }
        if(flag==1) cout<<v.size()<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}