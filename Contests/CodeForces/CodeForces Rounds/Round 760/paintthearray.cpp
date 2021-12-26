#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a,ll b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}

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
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll g1 = arr[0];
        ll g2 = arr[1];
        for(int i=0;i<n;i++)
        {
            if(i%2==0) g1 = gcd(g1,arr[i]);
            else g2 = gcd(g2,arr[i]);
        }
        bool flag1 = 0,flag2 = 0;
        for(int i=0;i<n;i++)
        {
            if((i%2!=0)&&(arr[i]%g1==0)) flag1 = 1;
            else if((i%2==0)&&(arr[i]%g2==0)) flag2 = 1;
        }
        if(flag1==0) cout<<g1<<endl;
        else if(flag2==0) cout<<g2<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}