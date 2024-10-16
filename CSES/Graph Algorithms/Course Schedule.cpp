#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> color;
stack<int> ans;

bool dfs(int node)
{
    color[node]=1;
    for(auto c:g[node])
    {
        if(color[c]==0) 
        {
            if(dfs(c)) return true;
        }
        else if(color[c]==1) return true;

    }
    color[node]=2;
    ans.push(node);
    return false;
}

void solve()
{
    int n,m; cin>>n>>m;
    g.resize(n+1);
    color.resize(n+1,0);
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
    }
    bool cycle=false;
    for(int i=1;i<=n;i++)
    {
        if(!color[i]) 
        {
            cycle |=dfs(i);
            if(cycle)
            {
                cout<<"IMPOSSIBLE"<<endl;
                return;
            }
        }
    }
    while(ans.size())
    {
        cout<<ans.top()<<" ";
        ans.pop();
    }
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
}