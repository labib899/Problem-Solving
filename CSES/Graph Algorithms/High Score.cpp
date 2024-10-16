#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf=1e18;

void solve()
{
    int n,m; cin>>n>>m;
    vector<vector<ll>> g;
    vector<ll> dist(n+1,inf);
    dist[1]=0;
    for(int i=1;i<=m;i++)
    {
        ll a,b,w; cin>>a>>b>>w;
        g.push_back({a,b,-w});
    }
    if(n==1)
    {
        for(auto x:g)
        {
            if(x[2]<0) 
            {
                cout<<-1<<endl;
                return;
            }
        }
        cout<<0<<endl;
        return;
    }

    for(int i=1;i<=n-1;i++)
    {
        for(auto x:g)
        {
            ll a=x[0],b=x[1],w=x[2];
            if(dist[a]==inf) continue;
            dist[b]=min(dist[b],dist[a]+w);
        }
    }
    for(int i=1;i<=n-1;i++)
    {
        for(auto x:g)
        {
            ll a=x[0],b=x[1],w=x[2];
            if(dist[a]==inf) continue;
            if(dist[a]+w<dist[b]) dist[b]=-inf;
        }
    }
    cout<<(dist[n]==-inf ? -1:-dist[n])<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}