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
        int n, a, b;
        cin >> n >> a >> b;
        int ca = 1, cb = n;
        int r;
        if ((a + b) % 2 == 0)
            r = 0;
        else
            r = 1;
        if (abs(a - b) > 1 || (n < a + b + 2))
            cout << "-1" << endl;
        else
        {
            if (r == 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    if (a + b > -1)
                    {
                        if (i % 2 != 0)
                        {
                            cout << ca << " ";
                            ca++;
                            a--;
                        }
                        else
                        {
                            cout << cb << " ";
                            cb--;
                            b--;
                        }
                    }
                    else
                    {
                        cout << ca << " ";
                        ca++;
                    }
                }
            }
            else
            {
                if (a > b)
                {
                    for (int i = 1; i <= n; i++)
                    {
                        if (a + b > -1)
                        {
                            if (i % 2 != 0)
                            {
                                cout << ca << " ";
                                ca++;
                                a--;
                            }
                            else
                            {
                                cout << cb << " ";
                                cb--;
                                b--;
                            }
                        }
                        else
                        {
                            cout << cb << " ";
                            cb--;
                        }
                    }
                }
                else
                {
                    for (int i = 1; i <= n; i++)
                    {
                        if (a + b > -1)
                        {
                            if (i % 2 == 0)
                            {
                                cout << ca << " ";
                                ca++;
                                a--;
                            }
                            else
                            {
                                cout << cb << " ";
                                cb--;
                                b--;
                            }
                        }
                        else
                        {
                            cout << ca << " ";
                            ca++;
                        }
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}