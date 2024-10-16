#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod=1e9+7;

ll expo(ll a,ll b)
{
    if(b==0) return 1;
    ll x=expo(a,b/2); x=(x*x)%mod;
    if(b%2) x=(x*a)%mod;
    return x;
}

ll inv(ll a)
{
    return expo(a,mod-2);
}

void solve()
{
    ll n,m; cin>>n>>m;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll x=expo(m,__gcd(i,n));
        ans=(ans+x)%mod;
    }
    ans=(ans*inv(n))%mod;
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}