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
        ll n; cin>>n;
        ll arr[n+1],count[n+1];
        for(ll i=1;i<=n;i++) count[i]=0;
        for(ll i=1;i<=n;i++) {
            cin>>arr[i];
            count[arr[i]]++;
        }
        ll ans=0;
        for(ll i=1;i<=n-1;i++) {
            ll sum=arr[i];
            for(ll j=i+1;j<=n;j++) {
                sum+=arr[j];
                if(sum<=n) ans+=count[sum],count[sum]=0;
                if(sum>n) break;
            }
        }
        cout<<ans<<endl;
    }
}



