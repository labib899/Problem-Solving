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
    if(n==3) cout<<"NO"<<endl;
    else if(n%2==0) {
        cout<<"YES"<<endl;
        for(int i=0;i<n/2;i++) cout<<"1 -1 ";
        cout<<endl;
    }
    else {
        cout<<"YES"<<endl;
        int x=n/2;
        for(int i=0;i<n/2;i++) cout<<1-x<<" "<<x<<" ";
        cout<<1-x<<endl;
    }
}

