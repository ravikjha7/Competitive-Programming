#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int arr[3];
        for(int i=0;i<3;i++) cin>>arr[i];
        sort(arr,arr+3);
        int count = 0;
        count += arr[1]-arr[0];
        count += arr[2]-arr[1];
        cout<<count<<endl;
    return 0;
}
