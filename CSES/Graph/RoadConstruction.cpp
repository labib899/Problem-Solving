#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> parent,sz;

void make(int x) { parent[x]=x,sz[x]=1; }

int Find(int x)
{
    if(x==parent[x]) return x;
    return parent[x]=Find(parent[x]);
}

void Union(int a,int b) 
{
    a=Find(a), b=Find(b);
    if(a!=b)
    {
        if(sz[a]<sz[b]) swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

void solve()
{
    cin>>n>>m;
    parent.resize(n+1); sz.resize(n+1);
    for(int i=0;i<=n;i++) make(i);
    int comp=n,mx=1;
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        if(Find(a)!=Find(b)) comp--;
        Union(a,b);
        mx=max(mx,sz[Find(a)]);
        cout<<comp<<" "<<mx<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}