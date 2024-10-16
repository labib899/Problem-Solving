#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {
        int s,f; cin>>s>>f;
        vec.push_back({f,s});
    }

    sort(vec.begin(),vec.end());
    int ans=1,temp=vec[0].first;
    for(int i=1;i<n;i++)
    {
        if(vec[i].second>=temp) ans++,temp=vec[i].first;
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}