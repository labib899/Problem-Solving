#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m; cin>>n>>m;
    multiset<int,greater<int>> ms;
    for(int i=0;i<n;i++) 
    {   
        int x; cin>>x; 
        ms.insert(x); 
    }
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        auto it=ms.lower_bound(x);
        if(it==ms.end()) cout<<-1<<endl;
        else 
        {
            cout<<*it<<endl;
            ms.erase(it);
        }
    }   
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}