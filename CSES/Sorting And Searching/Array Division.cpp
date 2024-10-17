#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;

const int N=2e5+5;
ll n,k;
ll arr[N];

bool isValid(ll k,ll mid)
{
    ll sum=0,p=1;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>mid) p++, sum=arr[i];
    }
    return p<=k;
}
 
void solve()
{
    cin>>n>>k;
    ll mx=-1,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
        sum+=arr[i];
    }
    ll low=mx,high=sum;
    while(low<high)
    {
        ll mid=low/2+high/2;
        if(isValid(k,mid)) high=mid;
        else low=mid+1; 
    }
    cout<<low<<endl;
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