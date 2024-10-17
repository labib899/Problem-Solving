#include<bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
void solve()
{
    ll n,k; cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    map<ll,ll> freq;
    ll ans=0,cnt=0;
    int i=0,j=0;
    while(j<n)
    {
        freq[arr[j]]++;
        if(freq[arr[j]]==1) cnt++;
        while(cnt>k)
        {
            freq[arr[i]]--;
            if(freq[arr[i]]==0) cnt--;
            i++;
        }
        ans+=j-i+1;
        j++;
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