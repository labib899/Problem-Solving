#include <bits/stdc++.h>
using namespace std;

int n,q,logn;
vector<vector<int>> up;
vector<int> depth;

// O(nlogn)
void prep()
{
    for(int j=1;j<logn;j++)
    {
        for(int i=1;i<=n;i++) 
        {   
            if(up[i][j-1]==-1) continue;
            up[i][j]=up[up[i][j-1]][j-1];
            depth[i]=depth[up[i][0]]+1;
        }
    }
}

// O(logn)
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
        if(up[b][j]!=-1 and up[a][j]!=up[b][j]) a=up[a][j],b=up[b][j];
    }
    return up[b][0];
}

void solve()
{
    cin>>n>>q;
    logn=log2(n)+1;
    up.assign(n+1,vector<int>(logn,-1)); depth.assign(n+1,0);
    for(int i=2;i<=n;i++)
    {
        int x; cin>>x;
        up[i][0]=x;
    }
    prep();
    while(q--)
    {
        int a,b; cin>>a>>b;
        cout<<lca(a,b)<<endl;
    }
}

signed main()
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;//cin>>t;
    while(t--) solve();
}