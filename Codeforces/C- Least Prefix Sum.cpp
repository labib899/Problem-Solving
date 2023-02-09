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
    vll v(n);
    forn(0,n,1) cin>>v[i];
    
    ll ans=0,sum=0;
    priority_queue<ll,vll,greater<ll>> pq1;
    forn(m,n,1) {
        if(v[i]<0) pq1.push(v[i]);
        sum+=v[i];
        while(sum<0) {
            int x=pq1.top(); pq1.pop();
            x= -x;
            ans++;
            sum=sum+2*x;
        }
    }
    
    if(v[m-1]<=0) sum=v[m-1];
    else if(m!=1) sum=-v[m-1],ans++;
    
    pqll pq2;
    for(ll i=m-2;i>=1;i--) {
        if(v[i]>0) pq2.push(v[i]);
        sum+=v[i];
        while(sum>0) {
            int x=pq2.top(); pq2.pop();
            x= -x;
            ans++;
            sum=sum+2*x;
        }
    }
    cout<<ans<<endl;
}

