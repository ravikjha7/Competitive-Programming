#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int countprimes(int b)
{
    int ans = 0;
    for (int i = 2; i * i <= b; i++)
    {
        if (b % i == 0)
        {
            ans++;
            while ((b % i) == 0)
            {
                b /= i;
            }
        }
    }
    if(b!=1) ans++;
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int noofprimes, ans=0;
        noofprimes = countprimes(m);
        for (int i = noofprimes; i > 0; i--)
        {
            if (n % i == 0)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}