#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin>>n>>k;
    int dp[n+1]={0},p[k];
    for(int i=0;i<k;i++) cin>>p[i];

    for(int i=1;i<=n;i++)
    {   
        for(int j=0;j<k;j++)
        {
            int idx=i-p[j];
            if(idx<0) continue;
            if(dp[idx]==0) dp[i]=1;
        }
    }
    for(int i=1;i<=n;i++) cout<<(dp[i]==1 ? 'W':'L');
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