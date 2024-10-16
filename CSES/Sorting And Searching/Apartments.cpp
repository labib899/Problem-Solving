#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k; cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0,i=0,j=0;
    while(i<n and j<m)
    {
        if(a[i]-k>b[j]) j++;
        else if(a[i]+k<b[j]) i++;
        else i++,j++,ans++;
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}