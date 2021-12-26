#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll bits[200005][20] = {0};
void setbits()
{
    for (ll i = 1; i <= 200000; i++)
    {
        ll temp = i, a = 0;
        while (temp > 0)
        {
            bits[i][a++] += (temp % 2);
            temp /= 2;
        }
        for (ll j = 0; j < 20; j++)
        {
            bits[i][j] += bits[i - 1][j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    setbits();
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll maxm = INT_MIN;
        for (int i = 0; i < 20; i++)
        {
            maxm = max(maxm, bits[r][i] - bits[l - 1][i]);
        }
        cout << (r - l + 1 - maxm) << endl;
    }
    return 0;
}