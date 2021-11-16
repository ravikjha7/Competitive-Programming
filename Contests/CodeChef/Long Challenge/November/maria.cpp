#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int temp,flag = 1;
        map<ll,ll> m;
        for(int i=0;i<n;i++){
            cin>>temp;
            m[temp]++;
        }
        // for(int i=0;i<n;i++){
        //     if(m[temp]>2)
        //         flag = 0;
        // }
        // if(m[m.max_size()-1]==2)
        //     flag = 0;

        for(auto x : m)
        {
            auto j = m.rbegin();
            if(j->second==2){
                flag = 0;
                break;
            }
            else if(x.second>2){
                flag = 0;
                break;
            }
        }
        
        if(!flag)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(auto it : m)
        {
            if(it.second == 2)
            {
                cout<<it.first<<" ";
            }
        }
        for(auto itr = m.rbegin(); itr != m.rend() ; itr++)
        {
            cout<<itr->first<<" ";
        }
        cout<<endl;
    }
    return 0;
}