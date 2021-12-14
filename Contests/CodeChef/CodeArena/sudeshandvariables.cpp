#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    map<string,int> map;
    string temp;
    char ptemp;
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(i!=0 && temp[0]!=ptemp)
        {
            flag = 0;
            break;
        }
        if(map.find(temp)!=map.end())
        {
            flag = 0;
            break;
        }
        map.insert({temp,1});
        ptemp = temp[temp.size()-1];
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}