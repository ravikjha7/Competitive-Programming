#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int BinarySearch(int arr[],int key,int low,int high)
{
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        high = mid-1;
        else
        low = mid+1;
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,7,8,99};
    int key = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<BinarySearch(arr,key,0,n)<<endl;
    return 0;
}
