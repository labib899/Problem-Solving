#include <bits/stdc++.h>
using namespace std;
 
int n,q,logn;
vector<vector<int>> g,up;
vector<int> depth,ans;
 
void dfs(int node,int p,int d)
{
    depth[node]=d; up[node][0]=p;
    for(auto c:g[node])
    {
        if(c!=p) dfs(c,node,d+1);
    }
}

void dfs1(int node,int p)
{
    for(auto c:g[node])
    {
        if(c!=p)
        {
            dfs1(c,node);
            ans[node]+=ans[c];
        }
    }
}

void prep()
{   
    dfs(1,-1,0);
    for(int j=1;j<logn;j++)
    {
        for(int i=1;i<=n;i++) 
        {
            if(up[i][j-1]==-1) continue;
            up[i][j]=up[up[i][j-1]][j-1];
        }
    }
}

int lca(int a,int b)
{   
    if(depth[a]>depth[b]) swap(a,b);
    int d=depth[b]-depth[a];
    for(int j=logn-1;j>=-0;j--)
    {
        if(d&(1<<j)) b=up[b][j];
    }
    if(a==b) return b;
    for(int j=logn-1;j>=0;j--)
    {
        if(up[a][j]!=up[b][j]) a=up[a][j],b=up[b][j];
    }
    return up[b][0];
}
 
void solve()
{
    cin>>n>>q;
    logn=log2(n)+1;
    g.resize(n+1); ans.resize(n+1);
    up.assign(n+1,vector<int>(logn,-1)); depth.assign(n+1,0);
    for(int i=1;i<=n-1;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    prep();
    while(q--)
    {
        int a,b; cin>>a>>b;
        ans[a]++,ans[b]++;
        ans[lca(a,b)]--;
        int par=up[lca(a,b)][0];
        if(par!=-1) ans[par]--;
    }
    dfs1(1,-1);
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
}
 
signed main()
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;//cin>>t;
    while(t--) solve();
}