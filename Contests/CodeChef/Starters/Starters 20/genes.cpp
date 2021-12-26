#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char a,b;
    cin>>a>>b;
    if(a=='R' || b == 'R') cout<<'R'<<endl;
    else if(a == 'B' || b == 'B') cout<<'B'<<endl;
    else cout<<'G'<<endl;

    return 0;
}
