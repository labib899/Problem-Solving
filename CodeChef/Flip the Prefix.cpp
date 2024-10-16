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

int main()
{
#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif
    //fastIO;
    ll t; cin>>t;
    while(t--) solve();
}

void solve() {
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int arr[n];
    arr[0]=0;
    int count=0,ans=INT_MAX;
    for(int i=1;i<n;i++) {
       if(s[i-1]!=s[i]) {
           count++;
           arr[i]=count;
       }
       else arr[i]=count;
    }
    for(int i=n-1;i>=0;i--) {
       if(i-(k-1)<0) break;
       int c=arr[i]-arr[i-(k-1)];
       if(s[i]=='0') c++;
       ans=min(ans,c);
    }
    cout<<ans<<endl;
}

