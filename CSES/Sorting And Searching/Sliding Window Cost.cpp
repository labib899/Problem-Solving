#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ff first
#define ss second
typedef long long ll;
typedef pair<int,int> pii;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> iset;

void solve()
{
    int n,k; cin>>n>>k;
    iset s;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<k;i++) s.insert({arr[i],i});
    ll ans=0;
    int med=(*s.find_by_order((k-1)/2)).ff;
    for(int i=0;i<k;i++) ans+=abs(med-arr[i]);
    cout<<ans<<" ";
    for(int i=k;i<n;i++)
    {
        s.erase({arr[i-k],i-k});
        s.insert({arr[i],i});
        int med1=(*s.find_by_order((k-1)/2)).ff;
        ans+=abs(med1-arr[i])-abs(med-arr[i-k]);
        if(k%2==0) ans-=med1-med;
        med=med1;
        cout<<ans<<" ";
    }
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