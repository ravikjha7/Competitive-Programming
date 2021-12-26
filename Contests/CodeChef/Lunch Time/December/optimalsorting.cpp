#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        ll s = n - 1, ans = 0;
        while (s > 0)
        {
            if (a[s] != b[s])
            {
                ll p = b[s], q = a[s];
                ll i = s;
                while (i > 0)
                {
                    if (a[i] != b[s])
                        i--;
                    else
                        break;
                    q = min(q, a[i]);
                }
                ll pos = lower_bound(b.begin(), b.end(), q) - b.begin();
                for (ll j = pos; j < i; j++)
                    q = min(q, a[j]);
                while (b[pos] != q)
                {
                    pos = lower_bound(b.begin(), b.end(), q) - b.begin();
                    for (ll j = pos; j < i; j++)
                        q = min(q, a[j]);
                }
                ans += (p - q);
                s = pos - 1;
            }
            else
                s -= 1;
        }
        cout << ans << endl;
    }
    return 0;
}