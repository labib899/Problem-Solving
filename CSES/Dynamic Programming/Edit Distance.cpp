#include <bits/stdc++.h>
using namespace std;

#define min3(a,b,c) min(a,min(b,c))

void solve()
{
    string a,b; cin>>a>>b;
    int n=a.size(),m=b.size();
    vector<vector<int>> dp(n+2,vector<int>(m+2,0));
    for(int i=1;i<=n;i++) dp[i][0]=i;
    for(int j=1;j<=m;j++) dp[0][j]=j;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min3(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][m]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}