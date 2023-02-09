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
 
void solve()
{
    char chess[9][9];
    for(ll i=1;i<=8;i++)
    {
        for(ll j=1;j<=8;j++) {cin>>chess[i][j];}
    }
    for(ll i=2;i<=7;i++)
    {
        for(ll j=2;j<=7;j++)
        {
            if(chess[i-1][j-1]=='#' && chess[i-1][j+1]=='#' && chess[i][j]=='#' && chess[i+1][j-1]=='#' && chess[i+1][j+1]=='#')
            {
                cout<<i<<" "<<j<<endl;
                return ;
            }
        }
    }
}
 
int main()
{
    fastIO;
    ll t; cin>>t;
    while(t--) solve();
}

