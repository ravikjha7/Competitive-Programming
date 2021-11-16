#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        if(a+(k*x)<b+(k*y))
            cout<<"PETROL"<<endl;
        else if(a+(k*x)>b+(k*y))
            cout<<"DIESEL"<<endl;
        else
            cout<<"SAME PRICE"<<endl;
    }
    return 0;
}