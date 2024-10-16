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
int query(int node,int k)
{   
    if(depth[node]<k) return -1;
    for(int j=logn-1;j>=0;j--)
    {
        if(k&(1<<j)) node=up[node][j];
    }
    return node;
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
        int x,k; cin>>x>>k;
        cout<<query(x,k)<<endl;
    }
}

signed main()
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;//cin>>t;
    while(t--) solve();
}