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
        int x,y;
        cin>>x>>y;
        if((x+y)%2!=0)
        cout<<"-1 -1"<<endl;
        else
        {
            int p,q;
            if(x%2==0)
            {
                p = x/2;
                q = y/2;
            }
            else
            {
                if(x>y)
                {
                    q = y;
                    p = ((x+y)/2) - y;
                }
                else
                {
                    p = x;
                    q = ((x+y)/2) - x;
                }
            }
            cout<<p<<" "<<q<<endl;
        }
    }
    return 0;
}
