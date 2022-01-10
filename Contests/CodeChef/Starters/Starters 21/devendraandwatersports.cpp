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
        ll z,y,a,b,c;
        cin >> z >> y >> a >> b >> c;
        if(z >= y + a + b + c) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}
