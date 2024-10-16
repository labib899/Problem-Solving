#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x; cin>>n>>x;
    vector<int> w(n);
    for(int i=0;i<n;i++) cin>>w[i];
    
    sort(w.begin(),w.end());
    int ans=n,i=0,j=n-1;
    while(i<j)
    {
        if(w[i]+w[j]<=x) i++,j--,ans--;
        else j--;
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}