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
        string s,t;
        cin>>s>>t;
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a') a++;
            else if(s[i] == 'b') b++;
            else if(s[i] == 'c') c++;
        }
        if(t[0]=='a'&&t[1]=='b'&&t[2]=='c')
        {
            // cout<<"I am in if block"<<endl;
            int temp = a;
            for(int i=0;i<a;i++) cout<<'a';
            if(temp!=0)
            for(int i=0;i<c;i++) cout<<'c';
            for(int i=0;i<b;i++) cout<<'b';
            if(temp==0)
            for(int i=0;i<c;i++) cout<<'c';
            sort(s.begin(),s.end());
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!='a'&&s[i]!='b'&&s[i]!='c') cout<<s[i];
            }
            cout<<endl;
        }
        else
        {
            // cout<<"I am in else block"<<endl;
            sort(s.begin(),s.end());
            for(int i=0;i<a;i++) cout<<'a';
            for(int i=0;i<b;i++) cout<<'b';
            for(int i=0;i<c;i++) cout<<'c';
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!='a'&&s[i]!='b'&&s[i]!='c') cout<<s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
