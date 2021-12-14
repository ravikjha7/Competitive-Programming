#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

char rps(char p1 , char p2)
{
    if(p1==p2) return p1;
    if((p1=='P'&&p2=='R') || (p1=='R'&&p2=='P')) return 'P';
    if((p1=='R'&&p2=='S') || (p1=='S'&&p2=='R')) return 'R';
    if((p1=='S'&&p2=='P') || (p1=='P'&&p2=='S')) return 'S';
    return 'P';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        char rock[n+1],paper[n+1],scissor[n+1];
        char ans[n+1];
        ans[n] = s[n-1];
        rock[n] = rps('R',s[n-1]);
        paper[n] = rps('P',s[n-1]);
        scissor[n] = rps('S',s[n-1]);

        char win;
        for(int i=n-1;i>=1;i--)
        {
            // cout<<"Hey , I am running "<<i+1<<" time"<<endl;
            win = rps('R',s[i-1]);
            if(win == 'R') rock[i] = rock[i+1];
            else if(win == 'P') rock[i] = paper[i+1];
            else if(win == 'S') rock[i] = scissor[i+1];
            win = rps('P',s[i-1]);
            if(win == 'P') paper[i] = paper[i+1];
            else if(win == 'R') paper[i] = rock[i+1];
            else if(win == 'S') paper[i] = scissor[i+1];
            win = rps('S',s[i-1]);
            if(win == 'R') scissor[i] = rock[i+1];
            else if(win == 'P') scissor[i] = paper[i+1];
            else if(win == 'S') scissor[i] = scissor[i+1];
            if(s[i-1]=='R') ans[i] = rock[i+1];
            else if(s[i-1]=='P') ans[i] = paper[i+1];
            else if(s[i-1]=='S') ans[i] = scissor[i+1];
        }
        // cout<<"Mai Yaha Tak Aaya Hu!!!"<<endl;
        // cout<<ans<<endl;
        // cout<<rock<<endl;
        // cout<<paper<<endl;
        // cout<<scissor<<endl;
        for(int i=1;i<=n;i++) cout<<ans[i];
        cout<<endl;

    }
    return 0;
}