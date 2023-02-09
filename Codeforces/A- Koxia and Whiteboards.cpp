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
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef priority_queue<ll> pqll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


void solve();


int main()
{
#ifndef ONLINE_JUDGE
   //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
#endif
   fastIO;
   ll t; cin>>t;
   while(t--) solve();
}

void solve() {
    ll n,m; cin>>n>>m;
    vll a(n),b(m);
    ll sum=0;
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(all(a));
    forn(0,m,1) cin>>b[i];
    for(auto x:b) {
        bool f=0;
        forn(0,n,1) {
            if(x>a[i]) {
                a[i]=x;
                f=1;
                break;
            }
        }
        if(!f) {
            a[0]=x;
            sort(all(a));
        }
        else {
            f=0;
            sort(all(a));
        }
    }
    for(auto x:a) sum+=x;
    cout<<sum<<endl;
}



