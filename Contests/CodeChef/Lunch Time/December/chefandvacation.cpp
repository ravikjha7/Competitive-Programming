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
        ll x,y,z;
        cin >> x >> y >> z;
        if(x + y < z) cout<< "PLANEBUS" << endl;
        else if(x + y > z) cout<< "TRAIN" << endl;
        else cout << "EQUAL" << endl;
    }
    return 0;
}
