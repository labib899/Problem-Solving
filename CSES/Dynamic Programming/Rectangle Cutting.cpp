#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;
 
signed main()
{
    int a,b; cin>>a>>b;
    dp.resize(a+1,vector<int> (b+1,INT_MAX));
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i==j) { dp[i][j]=0; continue; }
            for(int h=1;h<=i-1;h++) dp[i][j]=min(dp[h][j]+dp[i-h][j]+1,dp[i][j]);
            for(int v=1;v<=j-1;v++) dp[i][j]=min(dp[i][v]+dp[i][j-v]+1,dp[i][j]);
        }
    }
    cout<<dp[a][b]<<endl;
}