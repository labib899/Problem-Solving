#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod=1e9+7;
const ll N=1e6+5;
vector<ll> dp(N+1,INT_MAX),coins;

void func()
{   
    dp[0]=0;
    for(ll i=1;i<=N;i++)
    {
        for(auto c:coins)
        {
            if(i-c>=0) dp[i]=min(dp[i],dp[i-c]+1);
        }
    }
}

void solve()
{
    ll n,x; cin>>n>>x;
    coins.resize(n);
    for(int i=0;i<n;i++) cin>>coins[i];
    func();
    cout<<(dp[x]==INT_MAX ? -1:dp[x])<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}