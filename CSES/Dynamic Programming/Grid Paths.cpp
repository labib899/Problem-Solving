#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int n;
vector<vector<char>> g;
vector<vector<int>> dp;

bool isValid(int x,int y)
{
    if(x<1 or x>n or y<1 or y>n) return false;
    if(g[x][y]!='.') return false;
    return true;
}

void func()
{   
    dp[1][1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(g[i][j]=='*') continue;
            if(isValid(i-1,j) and isValid(i,j-1)) 
            {
                dp[i][j]+=dp[i-1][j]+dp[i][j-1];
                dp[i][j]%=mod;
            }
            else if(isValid(i-1,j)) 
            {
                dp[i][j]+=dp[i-1][j];
                dp[i][j]%=mod;
            }
            else if(isValid(i,j-1)) 
            {   
                dp[i][j]+=dp[i][j-1];
                dp[i][j]%=mod;
            }
        }
    }
}

void solve()
{
    cin>>n;
    g.resize(n+2,vector<char>(n+2)); dp.resize(n+2,vector<int>(n+2,0));
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=n;j++) cin>>g[i][j];
    }
    if(n==1 and g[1][1]=='*')
    {
        cout<<0<<endl;
        return;
    }
    func();
    cout<<dp[n][n]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}