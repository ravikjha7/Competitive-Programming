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
        string s;
        cin>>s;
        int count = 0;
        if(s[0]=='0')
        {
            for(int i=1;i<n;i++)
            {
                if((i%2!=0 && s[i]=='0')||(i%2==0 && s[i]=='1'))
                {
                    while((i%2!=0 && s[i]=='0')||(i%2==0 && s[i]=='1')) i++;
                    count++;
                }
            }
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if((i%2==0 && s[i]=='0')||(i%2!=0 && s[i]=='1'))
                {
                    while((i%2==0 && s[i]=='0')||(i%2!=0 && s[i]=='1')) i++;
                    count++;
                }
            }
        }
        if(count%2==0) cout<<"Uttu"<<endl;
        else cout<<"JJ"<<endl;
    }
    return 0;
}