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
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int flag = 0;

        if(x1==1||x1==8||y1==1||y1==8)
        {
            if(x1==1)
            {
                if((x2==2 || x3==2)&&(y2!=y3))
                {
                    if(abs(y2-y1)>1 && abs(y3-y1)>1) flag = 1;
                }
            }
            else if(x1==8)
            {
                if((x2==7 || x3==7)&&(y2!=y3))
                {
                    if(abs(y2-y1)>1 && abs(y3-y1)>1) flag = 1;
                }
            }

            if(y1==1)
            {
                if((y2==2||y3==2)&&(x2!=x3))
                {
                    if(abs(x2-x1)>1 && abs(x3-x1)>1) flag = 1;
                }
            }
            else if(y1==8)
            {
                if((y2==7||y3==7)&&(x2!=x3)) 
                {
                    if(abs(x2-x1)>1 && abs(x3-x1)>1) flag = 1;
                }
            }
        }
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}