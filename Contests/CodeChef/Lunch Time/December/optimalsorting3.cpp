#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        vector<ll> brr(n);
        brr[n - 1] = arr[n - 1];
        for (ll i = n - 2; i >= 0; i--)
        {
            brr[i] = min(brr[i + 1], arr[i]);
        }
        ll ans = 0;
        ll minm = INT_MAX, maxm = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            minm = min(minm, arr[i]);
            maxm = max(maxm, arr[i]);
            if (i == n - 1 || maxm <= brr[i + 1])
            {
                ans += maxm - minm;
                minm = INT_MAX;
                maxm = INT_MIN;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
