#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        string num=to_string(i);
        for(auto c:num)
        {
            int digit=c-'0';
            if(digit) dp[i]=min(dp[i],dp[i-digit]+1);
        }
    }
    cout<<dp[n]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}