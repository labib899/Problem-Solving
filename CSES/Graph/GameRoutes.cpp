#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> in,cnt;
int n,m;
const int mod=1e9+7;

void topoSort()
{   
    queue<int> q;
    for(int i=2;i<=n;i++)
    {
        if(in[i]==0) q.push(i);
    }
    while(q.size())
    {
        int node=q.front(); q.pop();
        for(auto c:g[node])
        {
            in[c]--;
            if(c!=1 and in[c]==0) q.push(c);
        }
    }
    q.push(1);
    cnt[1]=1;
    while(q.size())
    {
        int node=q.front(); q.pop();
        for(auto c:g[node])
        {
            in[c]--;
            if(in[c]==0) q.push(c);
            cnt[c]+=cnt[node]; cnt[c]%=mod;
        }
    }
}

void solve()
{
    cin>>n>>m;
    g.resize(n+1);
    in.resize(n+1,0);
    cnt.resize(n+1,0);
    for(int i=1;i<=m;i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
        in[b]++;
    }
    topoSort();
    cout<<cnt[n]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
}