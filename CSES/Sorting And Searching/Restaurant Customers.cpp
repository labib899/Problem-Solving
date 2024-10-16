#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {
        int a,b; cin>>a>>b;
        vec.push_back({a,1});
        vec.push_back({b,-1});
    }

    sort(vec.begin(),vec.end());
    int mx=1,sum=0;
    for(auto x:vec) sum+=x.second,mx=max(mx,sum);
    cout<<mx<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}