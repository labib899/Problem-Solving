#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

void solve()
{
    int n; cin>>n;
    if((n*(n+1)/2)%2) {cout<<0<<endl; return; }
    vector<vector<int>> dp(n+1,vector<int>(n*(n+1)/4+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=(n*(n+1)/4);j++)
        {
            dp[i][j]=(j-i>=0 ? dp[i-1][j-i]:0)+dp[i-1][j];
            dp[i][j]%=mod;
        }
    }
    cout<<dp[n-1][n*(n+1)/4]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}