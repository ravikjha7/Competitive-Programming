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
        if(n==2) cout<<"2 1"<<endl;
        else
        {
            cout<<"1 ";
            for(int i=2;i<n;i++)
            {
                cout<<i+1<<" ";
            }
            cout<<"2"<<endl;
        }
    }
    return 0;
}