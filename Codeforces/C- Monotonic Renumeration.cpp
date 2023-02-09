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

const ll mod=998244353;
void solve();

int main()
{
    fastIO;
    solve();
}


void solve()
{
    ll n; cin>>n;
    
    vll v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    
    map<ll,ll> last_pos;
    for(ll i=0;i<n;i++) last_pos[v[i]]=i;
    
    ll end=0,g=0;
    for(ll i=0;i<n;i++)
    {
        end=max(end,last_pos[v[i]]);
        if(end==i) g++;
    }
    
    ll ans=1;
    for(ll i=1;i<g;i++) ans=(ans*2)%mod;
    cout<<ans<<endl;
}


