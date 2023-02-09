#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define forn(j,n,x) for(ll i=j;i<n;i+=x)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef priority_queue<int> pqi;
typedef priority_queue<ll> pqll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


void solve();

int main() {
#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif
    fastIO;
    ll t; cin>>t;
    while(t--) solve();
}

void solve() {
    int n; cin>>n;
    vvi v(n,vi (n));
    int x=1,y=n*n;
    forn(0,n,1)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                if(j%2==0) v[i][j]=x++;
                else v[i][j]=y--;
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                if(j%2==0) v[i][j]=y--;
                else v[i][j]=x++;
            }
        }
    }
    forn(0,n,1)
    {
        for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }
}



