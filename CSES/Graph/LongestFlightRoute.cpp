#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

vector<vector<pll>> g;
vector<ll> vis,dist,parent;
stack<ll> topo;
const ll inf=1e18;

void dfs(ll node)
{
    vis[node]=1;
    for(auto c:g[node])
    {
        if(vis[c.first]==0) dfs(c.first);
    }
    topo.push(node);
}

void solve()
{
    ll n,m; cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1,0);
    dist.resize(n+1,inf);
    parent.resize(n+1,-1);
    for(int i=1;i<=m;i++)
    {
        ll a,b; cin>>a>>b;
        g[a].push_back({b,-1});
    }
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]==0) dfs(i);
    }
    dist[1]=0;
    while(topo.size())
    {
        ll node=topo.top();
        topo.pop();
        for(auto c:g[node])
        {
            ll adjNode=c.first,wt=c.second;
            if(dist[node]+wt<dist[adjNode]) dist[adjNode]=dist[node]+wt,parent[adjNode]=node;
        }
    }
    if(dist[n]==inf) cout<<"IMPOSSIBLE"<<endl;
    else 
    {
        vector<ll> path;
        ll node=n;
        while(node!=-1)
        {
            path.push_back(node);
            node=parent[node];
        }
        reverse(path.begin(),path.end());
        if(path[0]!=1)
        {
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
        cout<<path.size()<<endl;
        for(int i=0;i<path.size();i++) cout<<path[i]<<" ";
        cout<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
}