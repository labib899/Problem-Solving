#include <bits/stdc++.h>
using namespace std;
 
typedef pair<int,int> pii;
 
vector<vector<int>> g;
vector<int> vis;
 
void dfs(int node)
{
    vis[node]=1;
    for(auto child:g[node])
    {
        if(!vis[child]) 
        {
            dfs(child);
        }
    }
}
 
signed main()
{
    int n,m; cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1,0);
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int comp=0;
    vector<int> ans;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i]) 
        {
            dfs(i);
            ans.push_back(i);
            comp++;
        }
    }
    cout<<comp-1<<endl;
    for(int i=0;i<comp-1;i++)
    {
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
}