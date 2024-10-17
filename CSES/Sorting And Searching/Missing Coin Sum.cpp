#include<bits/stdc++.h>
using namespace std;

using ll=long long;

void solve()
{
    int n; cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>sum+1)
        {
            cout<<sum+1<<endl;
            return;
        }
        sum+=arr[i];
    }
    cout<<sum+1<<endl;
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