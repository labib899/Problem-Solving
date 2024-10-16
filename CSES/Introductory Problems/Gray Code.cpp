#include <bits/stdc++.h>
using namespace std;
 
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
 
 
 
void solve()
{
    int n; cin>>n;
    int prev=0;
    for(int i=n-1;i>=0;i--) cout<<0;
    cout<<endl;
    for(int i=1;i<(1<<n);i++)
    {
        int x=(i & -i);
        int next=prev xor x;
        for(int j=n-1;j>=0;j--)
        {
            if(next & (1<<j)) cout<<1;
            else cout<<0;
        }
        cout<<endl;
        prev=next;
    }
}
 
signed main()
{
    fastIO;
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //printf("Case %d: ", i);
        solve();
    }
}