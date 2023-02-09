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

//const ll mod=998244353;

ll check(vll &v,ll n);
void solve();

int main()
{
    fastIO;
    solve();
}

ll check(vll &v,ll n) {
    ll s=v.size();
    ll ans=0,j=0,sum=0;
    for(ll i=0;i<s;i++) {
        sum+=v[i];
        if(sum==n) {
            ans+=(i-j);
            sum=0;
            j=i+1;
        }
        else if(sum>n) return -1;
    }
    return ans;
}


void solve() {
    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vll v(n);
        ll total=0;
        for(ll i=0;i<n;i++) {
            cin>>v[i];
            total+=v[i];
        }
        ll ans=n-1;
        for(ll i=1;i*i<=total;i++) {
            if(total%i==0) {
                ll a=i,b=total/i;
                ll x=check(v,a);
                ll y=check(v,b);
                if(x!=-1) ans=min(ans,x);
                if(y!=-1) ans=min(ans,y);
            }
        }
        cout<<ans<<endl;
    }
}


