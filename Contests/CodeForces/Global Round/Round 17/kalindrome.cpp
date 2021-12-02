#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int remove(int arr[],int low,int high,int k)
{
    if(low>=high) return 1;
    while(low<=high)
    {
        if(arr[low]==arr[high])
        {
            low++;
            high--;
        }
        else
        {
            if (arr[low] == k){
               if (remove(arr, low+1, high, k)) return 1;
            }
            if (arr[high] == k) 
            {
               if (remove(arr, low, high-1, k)) return 1;
            }
           return 0;
        }
    }
    return 1;
}

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
        int low = 0 , high = n-1;
        bool flag = true;
        while(low<=high)
        {
            if(arr[low]==arr[high])
            {
                low++;
                high--;
            }
            else
            {
                if(remove(arr,low+1,high,arr[low])) flag = true;
                else if(remove(arr,low,high-1,arr[high])) flag = true;
                else flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}