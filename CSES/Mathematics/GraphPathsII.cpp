#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;

const ll inf=2e18;

vvll mul(vvll &a,vvll &b)
{
    int n=a.size();
    vvll ans(n,vll(n,inf));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                ans[i][j]=min(ans[i][j],a[i][k]+b[k][j]);
            }
        }
    }
    return ans;
}

vvll expo(vvll &a,ll n)
{
    if(n==1) return a;
    vvll x=expo(a,n/2);
    x=mul(x,x);
    if(n&1) x=mul(x,a);
    return x;
}

void solve()
{
    ll n,m,k; cin>>n>>m>>k;
    vvll g(n,vll(n,inf));
    for(int i=1;i<=m;i++)
    {
        ll a,b,c; cin>>a>>b>>c; a--,b--;
        g[a][b]=min(g[a][b],c);
    }
    ll ans=expo(g,k)[0][n-1];
    cout<<(ans==inf ? -1:ans)<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}