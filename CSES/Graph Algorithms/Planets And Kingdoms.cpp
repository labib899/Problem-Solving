#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g,tg,ans;
vector<bool> vis1,vis2;
vector<int> order,scc,kingdom;

void dfs1(int node)
{
    vis1[node]=true;
    for(auto c:g[node])
    {
        if(!vis1[c]) dfs1(c);
    }
    order.push_back(node);
}

void dfs2(int node)
{
    vis2[node]=true;
    for(auto c:tg[node])
    {
        if(!vis2[c]) dfs2(c); 
    }
    scc.push_back(node);
}

void solve()
{
    int n,m; cin>>n>>m;
    g.resize(n+1); tg.resize(n+1);
    vis1.resize(n+1,false); vis2.resize(n+1,false);
    kingdom.resize(n+1,0);
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        tg[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis1[i]) dfs1(i);
    }
    reverse(order.begin(),order.end());
    for(auto x:order)
    {   
        if(!vis2[x]) 
        {   
            scc.clear();
            dfs2(x);
            ans.push_back(scc);
        }
    }
    int comp=ans.size();
    for(int i=0;i<comp;i++)
    {
        for(auto node:ans[i]) kingdom[node]=i+1;
    }
    cout<<comp<<endl;
    for(int i=1;i<=n;i++) cout<<kingdom[i]<<" "; 
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}