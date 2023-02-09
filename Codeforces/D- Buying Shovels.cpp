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
    ll n,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==1)cout<<n<<endl;
        else if(n<=k)cout<<1<<endl;
        else
        {
            ll ans=INT_MAX;
            for(ll i=1;i*i<=n;i++)
            {
                if(n%i==0 && i<=k)ans=min(ans,n/i);
                if(n%i==0 && n/i<=k)ans=min(ans,i);
            }
            cout<<ans<<endl;
        }
    }
}


