#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<ll>> dist;
const ll inf=1e18;
ll n,m,q;

void floyd()
{
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++) 
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
}

void solve()
{
    cin>>n>>m>>q;
    dist.resize(n+1,vector<ll>(n+1,inf));
    for(int i=1;i<=m;i++)
    {
        ll a,b,c; cin>>a>>b>>c;
        dist[a][b]=min(dist[a][b],c);
        dist[b][a]=min(dist[b][a],c);
    }
    for(int i=1;i<=n;i++) dist[i][i]=0;
    floyd();
    while(q--)
    {
        ll a,b; cin>>a>>b;
        cout<<(dist[a][b]==inf ? -1:dist[a][b])<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
}