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
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef priority_queue<ll> pqll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

//const ll mod=998244353;

void solve();

int main()
{
    fastIO;
    solve();
}


void solve() {
    ll t; cin>>t;
    while(t--) {
        ll n,k; cin>>n>>k;
        ll arr[n+1];
        map<ll,ll> m;
        for(ll i=1;i<=n;i++) {
            cin>>arr[i];
            if(arr[i]%k) m[k-arr[i]%k]++;
        }
        
        ll ans=0;
        for(auto &x:m) {
            ll a=x.first+(x.second-1)*k;
            ans=max(ans,a);
        }
        if(ans) cout<<ans+1<<endl;
        else cout<<ans<<endl;
    }
}



