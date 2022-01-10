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
        ll n,a,b;
        cin >> n >> a >> b;
        if((a+b)%2==0) cout << "0" << endl;
        else cout << "1" << endl;
    }
    return 0;
}