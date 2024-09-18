#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define PQ priority_queue
typedef long long ll;
typedef pair<ll,ll> pll;
const ll inf=1e18;

vector<vector<pll>> g1,g2;
vector<ll> d1,d2;
vector<bool> vis1,vis2;

void dijkstra1(ll node)
{
    d1[node]=0;
    PQ<pll,vector<pll>,greater<pll>> pq;
    pq.push({0,node});
    while(pq.size())
    {
        ll d=pq.top().ff,node=pq.top().ss;
        pq.pop();
        if(vis1[node]) continue;
        vis1[node]=true;
        for(auto x:g1[node])
        {
            ll adjNode=x.ff,w=x.ss;
            if(d+w<d1[adjNode]) 
            {
                d1[adjNode]=d+w;
                pq.push({d1[adjNode],adjNode});
            }
        }
    }
}

void dijkstra2(ll node)
{
    d2[node]=0;
    PQ<pll,vector<pll>,greater<pll>> pq;
    pq.push({0,node});
    while(pq.size())
    {
        ll d=pq.top().ff,node=pq.top().ss;
        pq.pop();
        if(vis2[node]) continue;
        vis2[node]=true;
        for(auto x:g2[node])
        {
            ll adjNode=x.ff,w=x.ss;
            if(d+w<d2[adjNode]) 
            {
                d2[adjNode]=d+w;
                pq.push({d2[adjNode],adjNode});
            }
        }
    }
}

void solve()
{
    int n,m; cin>>n>>m;
    g1.resize(n+1); g2.resize(n+1);
    d1.resize(n+1,inf); d2.resize(n+1,inf);
    vis1.resize(n+1,false); vis2.resize(n+1,false);
    for(int i=1;i<=m;i++)
    {
        ll a,b,w; cin>>a>>b>>w;
        g1[a].push_back({b,w});
        g2[b].push_back({a,w});
    }
    dijkstra1(1);
    dijkstra2(n);
    ll ans=inf;
    for(int i=1;i<=n;i++)
    {
        for(auto x:g1[i])
        {
            ll j=x.ff, w=x.ss;
            ans=min(ans,d1[i]+d2[j]+w/2);
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
}