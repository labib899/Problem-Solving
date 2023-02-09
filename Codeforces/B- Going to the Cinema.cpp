#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define forn(j,n,x) for(ll i=j;i<n;i+=x)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef priority_queue<int> pqi;
typedef priority_queue<ll> pqll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


void solve();

int main() {
#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif
    fastIO;
    ll t=1; cin>>t;
    while(t--) solve();
}

void solve() {
    int n; cin>>n;
    vi v(n),freq(n,0);
    forn(0,n,1)
    {
        cin>>v[i];
        freq[v[i]]++;
    }
    sort(all(v));
    int ans=0;
    if(freq[0]==0) ans=2;
    else ans=1;
    forn(0,n-1,1)
    {
        if(v[i+1]>=i+2 && v[i]<i+1) ans++;
    }
    cout<<ans<<endl;
}



