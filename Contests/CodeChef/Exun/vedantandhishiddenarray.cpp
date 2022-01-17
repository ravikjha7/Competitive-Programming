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
        ll n,a;
        cin >> n >> a;
        if(n == 1)
        {
            if(a % 2 == 0) cout << "Even" << endl;
            else cout << "Odd" << endl;
        }
        else
        {
            if(a % 2 == 0) cout << "Impossible" << endl;
            else
            {
                if(n%2==0) cout << "Even" << endl;
                else cout << "Odd" << endl;
            }
        }
    }
    return 0;
}