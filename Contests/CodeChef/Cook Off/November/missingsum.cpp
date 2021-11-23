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
        arr[0] = 1;
        cout<<arr[0]<<" ";
        for(int i=1;i<n;i++)
        {
            arr[i] = arr[i-1] + 2;
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
