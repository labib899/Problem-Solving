#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n; cin>>n;
    vector<pair<ll,ll>> vp;
    for(int i=0;i<n;i++)
    {
        ll dur,dead; cin>>dur>>dead;
        vp.push_back({dur,dead});
    } 

    sort(vp.begin(),vp.end());
    ll f=0,d=0,ans=0;
    for(int i=0;i<n;i++)
    {
        f+=vp[i].first,d=vp[i].second;
        ans+=(d-f);
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}