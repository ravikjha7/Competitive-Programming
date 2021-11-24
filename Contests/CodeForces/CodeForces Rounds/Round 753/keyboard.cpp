#include <bits/stdc++.h>
using namespace std;

int loc(char s, string r)
{
    for (int i = 0; i < r.size(); i++)
    {
        if (r[i] == s)
            return i;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string r, s;
        cin >> r >> s;
        int ans = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (loc(s[i], r) > loc(s[i - 1], r))
                ans += loc(s[i], r) - loc(s[i - 1], r);
            else
                ans += loc(s[i - 1], r) - loc(s[i], r);
        }
        cout << ans << endl;
    }
    return 0;
}