#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    set<int> s;
    for(int i=0;i<n;i++) 
    {
        int x; cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}