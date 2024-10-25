#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N=2e5+5;
int n,q,timer=1;
vector<int> g[N];
int val[N],in[N],out[N];
int fen[2*N];

void dfs(int node,int p)
{   
    in[node]=timer++;
    for(auto c:g[node])
    {
        if(c==p) continue;
        dfs(c,node);
    }
    out[node]=timer++;
}

int sum(int i)
{
    int s=0;
    while(i>0) s+=fen[i],i-=i&-i;
    return s;
}

void update(int i,int x)
{
    while(i<=2*n) fen[i]+=x,i+=i&-i;
}

void range_update(int l,int r,int x)
{
    update(l,x);
    update(r+1,-x);
}
 
void solve()
{
    cin>>n>>q; 
    for(int i=1;i<=n;i++) cin>>val[i];
    for(int i=1;i<=n-1;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1,0);
    for(int i=1;i<=n;i++) range_update(in[i],out[i],val[i]);
    while(q--)
    {
        int type,s,x; cin>>type>>s;
        if(type==1)
        {
            cin>>x;
            range_update(in[s],out[s],x-val[s]);
            val[s]=x;
        }
        else cout<<sum(in[s])<<endl;
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}
