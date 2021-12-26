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
        cin>>n;
        ll sum = 0;
        ll temp;
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            sum += temp;
        }
        if(sum % n == 0) cout << "0" << endl;
        else cout << "1" << endl;
    }
    return 0;
}
