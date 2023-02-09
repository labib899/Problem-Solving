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
    int w,d,h; cin>>w>>d>>h;
    int a,b,f,g; cin>>a>>b>>f>>g;
    vi ans;
    ans.pb(abs(a-f)+b+g);
    ans.pb(abs(a-f)+2*d-b-g);
    ans.pb(abs(b-g)+a+f);
    ans.pb(abs(b-g)+2*w-a-f);
    sort(all(ans));
    cout<<ans[0]+h<<endl;
}



