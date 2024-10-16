#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <bits/stdtr1c++.h>
//#include <bits/extc++.h>
using namespace std;
//using namespace __gnu_pbds;
//using namespace __gnu_cxx;
 
#define fastIO                  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl                    "\n"
#define pb                      push_back
#define mp                      make_pair
#define mt                      make_tuple
#define all(x)                  x.begin(),x.end()
#define allrev(x)               x.rbegin(),x.rend()
#define rep(i,l,r)              for(ll i=l;i<r;i++)
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define print(v)                for(auto x:v) cout<<x<<" ";cout<<endl;
#define ff                      first
#define ss                      second
#define PQ                      priority_queue
#define __lcm(a,b)              (a/__gcd(a,b))*b
typedef long long               ll;
typedef long double             ld;
typedef vector<int>             vi;
typedef vector<vi>              vvi;
typedef vector<ll>              vll;
typedef vector<vll>             vvll;
typedef vector<string>          vs;
typedef pair<int,int>           pii;
typedef pair<ll,ll>             pll;
//typedef tuple<int,int,int>      tiii;
//typedef tuple<ll,ll,ll>         tlll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
const ll mod=1e9+7;
const ll inf=1e18;
 
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<": ";_print(x);cerr<<endl;
#else 
#define debug(x)
#endif
 
void _print(int x) {cerr<<x;}
void _print(ll x) {cerr<<x;}
void _print(char x) {cerr<<x;}
void _print(string x) {cerr<<x;}
void _print(double x) {cerr<<x;}
void _print(ld x) {cerr<<x;}
 
template<class T> void _print(vector<T> v);
template<class T> void _print(set<T> s);
template<class T> void _print(multiset<T> ms);
template<class T,class V> void _print(pair<T,V> p);
template<class T,class V> void _print(map<T,V> m);
template<class T> void _print(vector<T> v) {cerr<<"[ ";for(T x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(set<T> s) {cerr<<"[ ";for(T x:s){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(multiset<T> ms) {cerr<<"[ ";for(T x:ms){_print(x);cerr<<" ";}cerr<<"]";}
template<class T,class V> void _print(pair<T,V> p) {cerr<<"{";_print(p.ff);cerr<<",";_print(p.ss);cerr<<"}";}
template<class T,class V> void _print(map<T,V> m) {cerr<<"[ ";for(auto x:m) {_print(x);cerr<<" ";}cerr<<"]";}
 
 
vll a,seg;
void build(int ind,int l,int h)
{
    if(l==h)
    {
        seg[ind]=a[l];
        return;
    }
    int mid=(l+h)/2;
    build(2*ind+1,l,mid);
    build(2*ind+2,mid+1,h);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
 
ll query(int ind,int l,int h,int a,int b)
{
    if(a<=l and h<=b) return seg[ind];
    if(a>h or l>b) return 0;
    int mid=(l+h)/2;
    ll left=query(2*ind+1,l,mid,a,b);
    ll right=query(2*ind+2,mid+1,h,a,b);
    return left+right;
}
 
void solve()
{
    ll n,q; cin>>n>>q;
    a.resize(n); seg.resize(4*n);
    rep(i,0,n) cin>>a[i];
    build(0,0,n-1);
    while(q--)
    {
        int a,b; cin>>a>>b; a--,b--;
        cout<<query(0,0,n-1,a,b)<<endl;
    }
}
 
signed main()
{
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //freopen("error.txt","w",stderr);
    #endif
    
    fastIO;
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //printf("Case %d: ", i);
        solve();
    }
}