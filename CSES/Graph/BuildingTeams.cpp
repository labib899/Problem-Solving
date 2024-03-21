#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> color;

bool bfs(int node)
{
    queue<int> q;
    q.push(node);
    color[node]=0;
    while(q.size())
    {
        int p=q.front(); q.pop();
        for(auto c:g[p])
        {
            if(color[c]==-1)
            {   
                q.push(c);
                color[c]=1-color[p];
            }
            else if(color[c]==color[p]) return false;
        }
    }
    return true;
}

void solve()
{
    int n,m; cin>>n>>m;
    g.resize(n+1);
    color.resize(n+1,-1);
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bool bipartite=true;
    for(int i=1;i<=n;i++)
    {
        if(color[i]==-1) bipartite &=bfs(i);
    }
    if(bipartite)
    {
        for(int i=1;i<=n;i++) cout<<color[i]+1<<" ";
        cout<<endl;
    }
    else cout<<"IMPOSSIBLE"<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
}