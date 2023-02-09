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
 

void solve();
int sum(ll n);
 
int main()
{
    fastIO;
    ll t; cin>>t;
    while(t--) solve();
}

void solve() {
    ll n,s; cin>>n>>s;
    ll ans=0;
    if(sum(n)<=s) {
        cout<<0<<endl;
        return;
    }
    ll p=1;
    for(ll i=1;i<=18;i++) {
        ll last_dig=(n/p)%10LL;
        n+=(10-last_dig)*p;
        ans+=(10-last_dig)*p;
        p*=10LL;
        if(sum(n)<=s) {
            cout<<ans<<endl;
            return;
        }
    }
}

int sum(ll n) {
    int ans=0;
    while(n) ans+=(n%10),n/=10;
    return ans;
}

