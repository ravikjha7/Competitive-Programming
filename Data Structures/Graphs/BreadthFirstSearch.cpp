#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

// Space Complexity : O(N + 2E) + O(N) + O(N)
// Time Complexity : O(N + E)
vector<int> bfs(vector<int> adj[],int n)
{
    int vis[n+1] = {0};
    cout << "Jaduuu" << endl;
    vector<int> ans;
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            ans.push_back(i);
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty())
            {
                int r = q.front();
                q.pop();
                for(auto j : adj[r])
                {
                    if(!vis[j])
                    {
                        vis[j] = 1;
                        q.push(j);
                        ans.push_back(j);
                    }
                }
            }
        }
    }
    return ans;
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

        // If this is a undirected Graph
        adj[v].push_back(u);
    }

    vector<int> ans = bfs(adj,n);
    for(auto i : ans) cout << i << " ";
    cout << endl;

    return 0;
}