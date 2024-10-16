#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    multiset<int> ms;
    for(int i=0;i<n;i++) 
    {
        int x; cin>>x;
        auto it=ms.upper_bound(x);
        if(it!=ms.end()) ms.erase(it);
        ms.insert(x);
    }
    cout<<ms.size()<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}