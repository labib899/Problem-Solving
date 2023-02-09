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


void solve();


int main() {
#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif
    //fastIO;
    int t; cin>>t;
    while(t--) solve();
}

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    string t=s;
    reverse(s.begin(),s.end());
    vector<vi> v(n+1, vi(n+1,0));
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           if(s[j-1]!=t[i-1])
               v[i][j]=max(v[i][j-1],v[i-1][j]);
           else v[i][j]=v[i-1][j-1]+1;
       }
    }
    int ans=v[n][n]/2;
    cout<<ans<<endl;
}
