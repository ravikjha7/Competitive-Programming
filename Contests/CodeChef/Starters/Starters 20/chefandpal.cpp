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
        if(n%2!=0) cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<n/2;i++) cout<<"01";
            cout<<endl;
        }
    }
    return 0;
}