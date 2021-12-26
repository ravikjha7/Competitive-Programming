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
        int maxm = 0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1]) flag = 0;
            if(arr[maxm]<=arr[i]) maxm = i;
        }
        if(flag) cout<<"0"<<endl;
        else if(maxm==n-1) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}