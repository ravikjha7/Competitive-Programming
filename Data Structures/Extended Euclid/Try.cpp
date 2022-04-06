#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
	ll arr[4];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	for(ll i = 0; i < 4; i++)
	{
		for(ll j = 0; j < 4; j++)
		{
			for(ll k = 0; k < 4; k++)
			{
				for(ll l = 0; l < 4; l++)
				{
					if(i != j && i != k && i != l && j != k && j != l && k != l)
					{
						// cout << "Hi" << endl;
						ll a = arr[i] + arr[j];
						if(a % 2 != 0) continue;
						a /= 2;
						ll b = arr[i] - a;
						if(b != 0 && arr[k] == a*b && arr[l] == (a/b)) {
							if(a > 10000 || b > 10000) {
						        cout << "-1 -1" << endl;
						        return;
						    }
							cout << a << " " << b << endl;
							return;
						}

					}
				}
			}
		}
	}
	cout << "-1 -1" << endl;
}

int main()
{
	file();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}