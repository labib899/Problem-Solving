#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pi pair<int,int>
#define pll pair<long long>
#define pqll priority_queue<long long>
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
        ll n,l,r; cin>>n>>l>>r;
        vll v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll ans=0;
        for(ll i=0;i<n;i++) {
            ll left=lower_bound(v.begin()+i+1,v.end(),l-v[i])-v.begin();
            ll right=upper_bound(v.begin()+i+1,v.end(),r-v[i])-v.begin();
            ans+=(right-left);
        }
        cout<<ans<<endl;
    }
}


