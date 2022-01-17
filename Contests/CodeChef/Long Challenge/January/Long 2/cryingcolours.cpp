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
        cin >> n;
        int arr[3];
        int brr[3];
        int crr[3];
        for(int i=0;i<3;i++) cin >> arr[i];
        for(int i=0;i<3;i++) cin >> brr[i];
        for(int i=0;i<3;i++) cin >> crr[i];
        ll ans = 0, curr = 0;
        curr = min(brr[0],arr[1]);
        ans += curr;
        arr[0] += curr;
        brr[1] += curr;
        arr[1] -= curr;
        brr[0] -= curr;

        curr = min(crr[0],arr[2]);
        ans += curr;
        arr[0] += curr;
        crr[2] += curr;
        arr[2] -= curr;
        crr[0] -= curr;

        curr = min(crr[1],brr[2]);
        ans += curr;
        crr[2] += curr;
        brr[1] += curr;
        crr[1] -= curr;
        brr[2] -= curr;

        curr = min(arr[1],crr[0]);
        ans += curr;
        arr[0] += curr;
        crr[1] += curr;
        arr[1] -= curr;
        crr[0] -= curr;

        curr = min(crr[1],brr[2]);
        ans += curr;
        crr[2] += curr;
        brr[1] += curr;
        crr[1] -= curr;
        brr[2] -= curr;

        curr = min(arr[2],crr[1]);
        ans += curr;
        arr[1] += curr;
        crr[2] += curr;
        arr[2] -= curr;
        crr[1] -= curr;

        curr = min(arr[1],brr[0]);
        ans += curr;
        arr[0] += curr;
        brr[1] += curr;
        arr[1] -= curr;
        brr[0] -= curr;

        cout << ans << endl;

    }
    return 0;
}