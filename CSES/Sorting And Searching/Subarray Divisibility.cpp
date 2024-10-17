#include<bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
void solve()
{
    ll n; cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    map<ll,ll> mp;
    ll sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        ll rem=sum%n;
        if(rem<0) rem+=n;
        if(rem==0) ans++;
        if(mp[rem]) ans+=mp[rem];
        mp[rem]++;
    }
    cout<<ans<<endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}