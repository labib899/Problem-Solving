#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


int main()
{
    fastIO;
    ll t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        vll a(n),cnt(31,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            for(int j=0;j<31;j++)
            {
                if(a[i] & (1<<j)) cnt[j]++;
            }
        }
        int ans=0;
        for(int i=30;i>=0;i--)
        {
            int need=n-cnt[i];
            if(need<=k)
            {
                ans+=(1<<i);
                k-=need;
            }
        }
        cout<<ans<<endl;
    }
}


