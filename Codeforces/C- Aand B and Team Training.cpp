#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


int main()
{
    fastIO;
    ll n,m;
    cin>>n>>m;
    ll a=min(n,m),b=max(n,m);
    ll ans=0;
    if(n==m)
    {
        ll x=1;
        while(1)
        {
            if(n<2 && m<2)break;
            if(x%2)n--,m-=2,ans++;
            else n-=2,m--,ans++;
            x++;
        }
    }
    else if(b>=2*a)ans=a;
    else
    {
       ans=b/2;
       for(ll x=b/2;x>=1;x--)
       {
           ll y=b-2*x;
           if(x+2*y<=a)ans=max(ans,x+y);
       }
    }
    cout<<ans<<endl;
}


