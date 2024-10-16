#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    bool cnt[n+1]={false};
    for(int i=0;i<n-1;i++)
    {
        int x; cin>>x;
        cnt[x]=true;
    }
    for(int i=1;i<=n;i++) 
    {
        if(cnt[i]==false)
        {
            cout<<i<<endl;
            return;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}
