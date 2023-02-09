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
   //fastIO;
   ll t; cin>>t;
   while(t--) solve();
}

void solve() {
    ll n; cin>>n;
    vll v(n);
    forn(0,n,1) cin>>v[i];
    ll ans=(ll)n*(n+1)/2;
    ll c=sqrt(2*n)+1;
    vll ps(c);
    forn(0,c,1) ps[i]=i*i;
    
    vll freq(4*n+1,0);
    freq[0]=1;
    int xorr=0;
    for(auto x:v) {
        xorr= xorr^x;
        for(auto e:ps) {
            ans-=freq[xorr^e];
        }
        freq[xorr]++;
    }
    cout<<ans<<endl;
}



