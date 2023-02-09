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
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

void solve();

int main()
{
    fastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

void solve()
{
        ll n,m; cin>>n>>m;
        ll arr[n+1][m+1];
        ll maxi=LLONG_MIN;
        ll r=0,c=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]>maxi)maxi=arr[i][j],r=i,c=j;
            }
        }
        cout<<max(n-r+1,r)*max(m-c+1,c)<<endl;
}

