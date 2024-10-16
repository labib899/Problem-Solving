#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> parent,sz;

void make(ll x) { parent[x]=x,sz[x]=1; }

ll Find(ll x)
{
    if(x==parent[x]) return x;
    return parent[x]=Find(parent[x]);
}

void Union(ll a,ll b) 
{
    a=Find(a), b=Find(b);
    if(a!=b)
    {
        if(sz[a]<sz[b]) swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

void solve()
{
    ll n,m; cin>>n>>m;
    parent.resize(n+1); sz.resize(n+1);
    vector<vector<ll>> g;
    for(ll i=0;i<=n;i++) make(i);
    for(ll i=1;i<=m;i++)
    {
        ll a,b,w; cin>>a>>b>>w;
        g.push_back({w,a,b});
    }
    sort(g.begin(),g.end());
    ll cost=0,comp=n;
    for(auto x:g)
    {
        ll w=x[0],a=x[1],b=x[2];
        if(Find(a)!=Find(b))
        {   
            cost+=w;
            comp--;
            Union(a,b);
        }
    }
    if(comp!=1) cout<<"IMPOSSIBLE"<<endl;
    else cout<<cost<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1; //cin>>t;
    while(t--) solve();
}