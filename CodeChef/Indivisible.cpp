#include<bits/stdc++.h>
using namespace std;


#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define forn(j,n,x) for(ll i=j;i<n;i+=x)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef priority_queue<ll> pqll;


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
    int a,b,c; cin>>a>>b>>c;
    for(int i=2;i<=99;i++) {
        if(a%i && b%i && c%i) {
            cout<<i<<endl;
            return ;
        }
    }
}




