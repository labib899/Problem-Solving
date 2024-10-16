#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> g;
vector<int> sub;

void dfs(int node,int p)
{
    for(auto c:g[node])
    {
        if(c==p) continue; 
        dfs(c,node);
        sub[node]+=sub[c];
    }
}

int centroid(int node,int p)
{
    for(auto c:g[node])
    {
        if(c==p) continue;
        if(sub[c]>n/2) return centroid(c,node);
    }
    return node;
}

void solve()
{
    cin>>n;
    g.resize(n+1);
    sub.resize(n+1,1);
    for(int i=1;i<=n-1;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1,-1);
    cout<<centroid(1,-1)<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}