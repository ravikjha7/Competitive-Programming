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
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for(ll i = 0; i < s.size() ; i++)
        {
            if(s[i] == '0') c0++;
            if(s[i] == '1') c1++;
        }
        if(c0!=0 && c1!=0)
        cout << min(c0,c1) - 1 << endl;
        else cout << "0" << endl;
    }
    return 0;
}