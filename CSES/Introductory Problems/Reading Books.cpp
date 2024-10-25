#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n; cin>>n;
    int arr[n];
    ll sum=0;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    if(arr[n-1]>sum-arr[n-1]) cout<<2*arr[n-1]<<endl;
    else cout<<sum<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}