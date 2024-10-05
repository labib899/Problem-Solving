#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;

const ll mod=1e9+7;

vvll mul(vvll &a,vvll &b)
{
    int n=a.size();
    vvll ans(n,vll(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                ans[i][j]+=a[i][k]*b[k][j];
                ans[i][j]%=mod;
            }
        }
    }
    return ans;
}

vvll expo(vvll &a,ll n)
{
    if(n==0)
    {
        int sz=a.size();
        vvll I(sz,vll(sz,0));
        for(int i=0;i<sz;i++) I[i][i]=1;
        return I;
    }
    if(n==1) return a;
    vvll x=expo(a,n/2);
    x=mul(x,x);
    if(n&1) x=mul(x,a);
    return x;
}

void solve()
{
    ll n,m,k; cin>>n>>m>>k;
    vvll g(n,vll(n,0));
    for(int i=1;i<=m;i++)
    {
        ll a,b; cin>>a>>b; a--,b--;
        g[a][b]++;
    }
    cout<<expo(g,k)[0][n-1]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}