#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const ll mod=1e9+7;

ll expo(ll a,ll b)
{
    if(b==0) return 1;
    ll x=expo(a,b/2); x=(x*x)%mod;
    if(b&1) x=(x*a)%mod;
    return x;
}

void solve()
{
    ll n; cin>>n;
    cout<<expo(2,n)<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}
