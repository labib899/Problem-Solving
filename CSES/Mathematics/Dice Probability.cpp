#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b; cin>>n>>a>>b;
    vector<vector<double>> dp(n+1,vector<double>(6*n+1,0.0));
    dp[0][0]=1.0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6*n;j++)
        {
            for(int k=1;k<=min(6,j);k++) dp[i][j]+=dp[i-1][j-k];
            dp[i][j]/=6.0;
        }
    }
    double ans=0.0;
    for(int i=a;i<=b;i++) ans+=dp[n][i];
    cout<<fixed<<setprecision(6)<<ans<<endl;
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