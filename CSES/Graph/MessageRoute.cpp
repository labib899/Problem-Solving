#include <bits/stdc++.h>
using namespace std;
 
#define PQ priority_queue
typedef pair<int,int> pii;
 
int n,m;
vector<vector<pii>> g;
vector<int> vis,dist,parent;
const int inf=INT_MAX;
 
void dijkstra(int src)
{
    dist[src]=0;
    parent[src]=-1;
    PQ<pii,vector<pii>,greater<pii>> pq;
    pq.push({0,src});
    while(pq.size())
    {
        int d=pq.top().first,node=pq.top().second;
        pq.pop();
        if(vis[node]) continue;
        vis[node]=1;
        for(auto c:g[node])
        {
            int cNode=c.first,w=c.second;
            if(d+w<dist[cNode]) 
            {
                dist[cNode]=d+w;
                pq.push({dist[cNode],cNode});
                parent[cNode]=node;
            }
        }
    }
}
 
void solve()
{
    n,m; cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1,0);
    dist.resize(n+1,inf);
    parent.resize(n+1,0);
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back({b,1});
        g[b].push_back({a,1});
    }
    dijkstra(1);
    if(dist[n]==inf) cout<<"IMPOSSIBLE"<<endl;
    else 
    {
        vector<int> path;
        int node=n;
        while(node!=-1)
        {
            path.push_back(node);
            node=parent[node];
        }
        cout<<path.size()<<endl;
        for(int i=path.size()-1;i>=0;i--) cout<<path[i]<<" ";
        cout<<endl;
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
}