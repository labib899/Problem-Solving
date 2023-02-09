#include<bits/stdc++.h>
using namespace std;


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
    ll n,k; cin>>n>>k;
    vll v(n);
    forn(0,n,1) cin>>v[i];
    int x=0,y=1;
    forn(0,n,1) {
        if(v[i]==y) x++,y++;
    }
    ll d=n-x;
    if(d%k==0) cout<<d/k<<endl;
    else cout<<d/k+1<<endl;
}

