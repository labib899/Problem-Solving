#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    long arr[n];
    long ans=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1]) ans+=arr[i-1]-arr[i],arr[i]=arr[i-1];
    }
    cout<<ans<<endl;
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
