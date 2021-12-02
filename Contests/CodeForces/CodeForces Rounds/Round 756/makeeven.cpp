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
        int r,flag=0,flag2=0;
        if(n%2==0) cout<<"0"<<endl;
        else
        {
            ll temp = n;
            while(temp>0)
            {
                r = temp % 10;
                if(r%2==0)
                {
                    flag = 1;
                }
                if((temp/10)==0)
                {
                    if(temp%2==0) flag2=1;
                }
                temp = temp/10;
            }
            if(flag==0) cout<<"-1"<<endl;
            else
            {
                if(flag2) cout<<"1"<<endl;
                else cout<<"2"<<endl;
            }
        }
    }
    return 0;
}
