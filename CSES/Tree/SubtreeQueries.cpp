#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,q;
vector<vector<int>> g;
vector<int> val,sub,seg,id,cnt,vec,ind;

void dfs(int node,int p)
{
    cnt[node]=1;
    id.push_back(node);
    for(auto c:g[node])
    {
        if(c!=p) 
        {
            dfs(c,node);
            cnt[node]+=cnt[c];
        }
    }
}

void build(int ind,int low,int high)
{   
    if(low==high) { seg[ind]=val[low]; return; }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);  
    seg[ind]=seg[2*ind+1]+seg[2*ind+2]; 
}

int query(int ind,int low,int high,int l,int r)
{
    if(l<=low and high<=r) return seg[ind];  
    if(high<l or low>r) return 0;  
    int mid=(low+high)/2;
    int left=query(2*ind+1,low,mid,l,r);  
    int right=query(2*ind+2,mid+1,high,l,r); 
    return left+right;
}

void update(int ind,int low,int high,int i,int value)
{
    if(low==high) { seg[ind]=value; return; } 
    int mid=(low+high)/2;
    if(i<=mid) update(2*ind+1,low,mid,i,value); 
    else update(2*ind+2,mid+1,high,i,value); 
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}

void solve()
{
    cin>>n>>q;
    g.resize(n); seg.resize(4*n,0);
    val.resize(n); vec.resize(n);
    sub.resize(n); cnt.resize(n); ind.resize(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    for(int i=1;i<=n-1;i++)
    {
        int a,b; cin>>a>>b; a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(0,-1);
    for(int i=0;i<n;i++) sub[i]=cnt[id[i]],val[i]=vec[id[i]],ind[id[i]]=i;
    build(0,0,n-1);
    while(q--)
    {
        int type; cin>>type;
        if(type==1)
        {
            int s,x; cin>>s>>x; 
            s--; s=ind[s];
            update(0,0,n-1,s,x);
        }
        else 
        {
            int s; cin>>s;
            s--; s=ind[s];
            cout<<query(0,0,n-1,s,s+sub[s]-1)<<endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}
