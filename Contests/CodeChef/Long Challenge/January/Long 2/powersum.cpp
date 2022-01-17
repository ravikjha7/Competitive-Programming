#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll checkpow(ll n)
{
    ll ans = 0;
    while(n>0)
    {
        n /= 2;
        ans++;
    }
    return ans;
}

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
        ll sum = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        // cout << sum << " " << sum-1 << endl;
        if((sum & (sum-1)) == 0) cout << "0" << endl;
        else
        {
            ll power = checkpow(sum);
            // cout << power << endl;
            power = pow(2,power);
            ll req = power - sum;
            ll ele;
            ll ind;
            for(ll i = 0; i < n; i++)
            {
                if((req+arr[i])%arr[i]==0)
                {
                    ind = i+1;
                    ele = (req+arr[i])/arr[i];
                    break;
                }
            }
            cout << "1" << endl;
            cout << "1 " << ele << endl;
            cout << ind << endl;
        }

    }
    return 0;
}