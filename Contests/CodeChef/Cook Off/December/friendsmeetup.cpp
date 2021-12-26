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
        ll x1,x2;
        cin >> x1 >> x2;
        if(x1 >= x2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}