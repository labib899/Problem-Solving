#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ff first
#define ss second
typedef pair<int,int> pii;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> iset;

void solve()
{
    int n,k; cin>>n>>k;
    iset s;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<k;i++) s.insert({arr[i],i});
    cout<<(*s.find_by_order((k-1)/2)).ff<<" ";
    for(int i=k;i<n;i++)
    {
        s.erase({arr[i-k],i-k});
        s.insert({arr[i],i});
        cout<<(*s.find_by_order((k-1)/2)).ff<<" ";
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