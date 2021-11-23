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
        int count2=0,count1=0;
        for(auto i : arr)
        {
            if(i%3==1) count1++;
            else if(i%3==2) count2++;
        }
        if(count1==0 && count2==0) cout<<"0"<<endl;
        else if(count1==count2) cout<<count1<<endl;
        else
        {
            int check = abs(count1-count2);
            if(check%3==0)
            {
                cout<<min(count1,count2) + ((abs(count1-count2)/3)*2)<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}