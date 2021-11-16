#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll arr[n];
        int count = 0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]%2!=0)
            count++;
        }
        cout<<count/2<<endl;
    }
    return 0;
}