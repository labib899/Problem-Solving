#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n; cin>>n;
    for(ll i=1;i<=n;i++)
    {
        ll ans=(i*i)*(i*i-1)/2;
        ans-=4*(i*i-3*i+2);
        cout<<ans<<endl;
    }
}
 
signed main()
{
    int t=1; //cin>>t;
    while(t--) solve();
}