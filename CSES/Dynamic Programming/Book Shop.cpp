#include <bits/stdc++.h>
using namespace std;

int n,x;
vector<int> prices,pages;
vector<vector<int>> dp;

void knapsack()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            int yes=(prices[i]<=j ? dp[i-1][j-prices[i]]+pages[i]:0);
            int no=dp[i-1][j];
            dp[i][j]=max(yes,no);
        }
    }
}


void solve()
{
    cin>>n>>x;
    prices.resize(n+1); pages.resize(n+1);
    dp.resize(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n;i++) cin>>prices[i];
    for(int i=1;i<=n;i++) cin>>pages[i];
    knapsack();
    cout<<dp[n][x]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}