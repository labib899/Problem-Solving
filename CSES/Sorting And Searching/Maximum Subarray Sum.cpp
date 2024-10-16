#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n; cin>>n;
    vector<ll> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    ll mx=LLONG_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=max(vec[i],sum+vec[i]);
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}