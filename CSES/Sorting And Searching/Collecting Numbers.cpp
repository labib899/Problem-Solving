#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> vec(n),idx(n+1);
    for(int i=0;i<n;i++) 
    {
        cin>>vec[i];
        idx[vec[i]]=i;
    }
    int ans=1;
    for(int i=2;i<=n;i++)
    {
        if(idx[i]<idx[i-1]) ans++;
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}