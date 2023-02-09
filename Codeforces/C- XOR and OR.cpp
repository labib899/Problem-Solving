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
ll mod(int k,int n) {
    if(k>=0) return k%n;
    else return (k%n)+n;
}

int main() {
#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif
    fastIO;
    ll t=1; //cin>>t;
    while(t--) solve();
}

void solve() {
    string a,b; cin>>a>>b;
    if(a==b) cout<<"YES"<<endl;
    else if(a.size()!=b.size() || a.size()==1) cout<<"NO"<<endl;
    else {
        int A=0,B=0;
        for(auto x:a) {
            if(x=='1') {
                A++;
                break;
            }
        }
        for(auto x:b) {
            if(x=='1') {
                B++;
                break;
            }
        }
        if(A && B) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


