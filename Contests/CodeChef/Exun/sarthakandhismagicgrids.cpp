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
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            for(int i = 1; i <= n; i++)
            {
                cout << "1 ";
            }
            cout << endl;
        }
    }
    return 0;
}