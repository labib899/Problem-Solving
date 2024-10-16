#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll x,y; cin>>x>>y;
    ll n=max(x,y),ans;
    ll sq=n*n,sqin=(n-1)*(n-1);
    if(n%2==0) ans=(x<=y ? sqin+x:sq-y+1);
    else ans=(x<=y ? sq-x+1:sqin+y);
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1; cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}
