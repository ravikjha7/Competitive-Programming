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
        float t1,t2,r1,r2;
        cin >> t1 >> t2 >> r1 >> r2;
        float c1,c2;
        c1 = (t1*t1)/(r1*r1*r1);
        c2 = (t2*t2)/(r2*r2*r2);
        if(c1 == c2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}