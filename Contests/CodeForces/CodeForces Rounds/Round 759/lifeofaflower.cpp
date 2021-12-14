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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int flag = 1;
        int ans = 1;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(arr[i]==1) ans += 1;
            }
            else
            {
                if(arr[i]==1&&arr[i-1]==1) ans += 5;
                else if(arr[i]==1) ans += 1;
                else if(arr[i]==0&&arr[i-1]==0)
                {
                    flag =0;
                    break;
                }
            }
        }
        if(flag) cout<<ans<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
