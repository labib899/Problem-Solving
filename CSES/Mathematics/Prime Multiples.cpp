#include <bits/stdc++.h>
//#include <bits/stdtr1c++.h>
//#include <bits/extc++.h>
 
using namespace std;
//using namespace __gnu_pbds;
//using namespace __gnu_cxx;
 
#define fastIO                  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen(x,"w",stdout)
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
 
 
void solve()
{
    ll n,k; cin>>n>>k;
    vll a(k);
    rep(i,0,k) cin>>a[i];
    ll ans=0;
    for(ll i=0;i<(1LL<<k);i++)
    {
        ll prod=1,cnt=0;
        for(ll j=0;j<k;j++)
        {
            if(i & (1<<j))
            {
                if(prod<=n/a[j]) prod*=a[j],cnt++;
                else 
                {
                    prod=2*n;
                    break;
                }
            }
        }
        if(cnt%2) ans+=(n/prod);
        else ans-=(n/prod);
    }
    cout<<ans+n<<endl;
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