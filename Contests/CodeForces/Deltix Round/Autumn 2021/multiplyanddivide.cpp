#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll f = 0;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            while (arr[i] % 2 == 0)
            {
                f++;
                arr[i] /= 2;
            }
        }
        sort(arr.begin(), arr.end());
        for (ll i = 0; i < f; i++)
        {
            arr.back() *= 2;
        }
        cout<<accumulate(arr.begin(),arr.end(),0LL)<<endl;
    }
    return 0;
}
