#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

bool isCycle(vector<int> adj[], int n)
{
    int vis[n+1] = {0};
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            queue<pair<int,int>> q;
            q.push({i,-1});
            vis[i] = 1;
            while(!q.empty())
            {
                int node = q.front().first;
                int parent = q.front().second;
                q.pop();
                for(auto it : adj[node])
                {
                    if(!vis[it])
                    {
                        q.push({it,node});
                        vis[it] = 1;
                    }
                    else if(it != parent) return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(isCycle(adj,n)) cout << "Cycle Found" << endl;
    else cout << "Cycle Not Found" << endl;
    return 0;
}