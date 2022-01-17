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
        ll n,d;
        cin >> n >> d;
        ll ans = 1;
        for(ll i = 0; i < d; i++)
        {
            if(i < 10)
            {
                ans *= 2;
                if(ans > n)
                {
                    ans = n;
                    break;
                }
            }
            else
            {
                ans *= 3;
                if(ans > n)
                {
                    ans = n;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}