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
        ll a,s;
        cin>>a>>s;
        if(a==s)
        {
            cout<<"0"<<endl;
            continue;
        }
        ll l1=0,l2=0;
        ll temp = a;
        while(temp>0)
        {
            temp /= 10;
            l1++;
        }
        temp = s;
        while(temp>0)
        {
            temp /= 10;
            l2++;
        }
        // cout<<l1<<" "<<l2<<endl;
        if(l1==l2)
        {
            int flag = 1;
            ll temp1 = a,temp2 = s;
            while(temp1>0)
            {
                ll r1 = temp1%10;
                ll r2 = temp2%10;
                if(r1>r2)
                {
                    flag = 0;
                    break;
                }
                temp1 /= 10;
                temp2 /= 10;
            }
            if(flag==0) cout<<"-1"<<endl;
            else
            {
                cout<<s-a<<endl;
            }
        }
        else if(l1>l2) cout<<"-1"<<endl;
        else
        {
            ll temp1 = a;
            ll temp2 = s;
            ll ans = 0;
            ll count = 0;
            int flag = 1;
            while(temp2>0)
            {
                ll r1 = temp1%10;
                ll r2 = temp2%10;
                if(r2>=r1)
                {
                    ans = ans + ((r2-r1)*pow(10,count));
                    count++;
                }
                else
                {
                    temp2 /= 10;
                    r2 = r2 + ((temp2%10)*10);
                    if(r2-r1>=10 || (r1>r2))
                    {
                        flag = 0;
                        break;
                    }
                    ans = ans + ((r2-r1)*pow(10,count));
                    count += 1;
                }
                temp1 /= 10;
                temp2 /= 10;
            }
            // cout<<ans<<endl;
            if(temp1>0) flag=0;
            if(flag==0) cout<<"-1"<<endl;
            else cout<<ans<<endl;
        }
    }
    return 0;
}