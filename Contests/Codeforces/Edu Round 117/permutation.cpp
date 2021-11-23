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
        int n,a,b;
        cin>>n>>a>>b;
        if((a<=n/2 && b<= n/2) || ((a>n/2) && (b>n/2)) || (a>(n/2)+1) || (b<(n/2)-1) || ((a>b) && b!=(n/2)))
        cout<<"-1"<<endl;
        else
        {
            if(a>b)
            {
                for(int i=n;i>0;i--)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<a<<" ";
                for(int i=n;i>0;i--)
                {
                    if(i!=a && i!=b)
                    cout<<i<<" ";
                }
                cout<<b<<endl;
            }
        }
    }
    return 0;
}
