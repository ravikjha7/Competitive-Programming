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
        ll n;
        cin >> n;
        ll arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        ll bits[64] = {0};
        for(ll i = 0; i < n; i++)
        {
            ll r = arr[i];
            ll d = 0;
            while(r)
            {
                if(r%2!=0) bits[d]++;
                d++;
                r /= 2;
            }
        }
        ll ans = 0;
        for(int i = 0; i < 64; i++)
        {
            if(bits[i] > 1) ans += pow(2,i);
        }
        cout << ans << endl;
    }
    return 0;
}