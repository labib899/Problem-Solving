#include<bits/stdc++.h>
using namespace std;

#define PQ				priority_queue
#define pb				push_back
#define ff 				first
#define ss    			second
typedef long long		ll;
typedef vector<ll>		vll;
typedef pair<ll,ll>		pll;

vector<vector<pll>> g;
vll dist,vis;
const ll inf=LLONG_MAX;

void dijkstra(ll source)
{
	dist[source]=0;
	PQ<pll,vector<pll>,greater<pll>> pq;
	pq.push({0,source}); // push {distance,node}
	while(pq.size())
	{	
		ll d=pq.top().ff;
		ll node=pq.top().ss; 
		pq.pop();
		if(vis[node]) continue;
		vis[node]=1;
		for(auto x:g[node])
		{
			ll adjNode=x.ff,w=x.ss;
			if(d+w<dist[adjNode])
			{
				dist[adjNode]=d+w;
				pq.push({dist[adjNode],adjNode});
			}
		}
	}
}


signed main()
{   
    ios_base::sync_with_stdio(0);cin.tie(0);
	ll n,m; cin>>n>>m;
	g.resize(n+1);
	dist.resize(n+1,inf);
	vis.resize(n+1,0);
	for(int i=1;i<=m;i++)
	{
		ll a,b,w; cin>>a>>b>>w;
		g[a].pb({b,w});
	}

	dijkstra(1);
	for(int i=1;i<=n;i++) cout<<dist[i]<<" ";
	cout<<endl;
}