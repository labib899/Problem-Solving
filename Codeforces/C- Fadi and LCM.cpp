#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pi pair<int,int>
#define pll pair<long long>
#define pqll priority_queue<long long>
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

//const ll mod=998244353;

void solve();

int main()
{
    fastIO;
    solve();
}


void solve() {
    ll x; cin>>x;
    ll c=1,d=x;
    for(ll i=1;i*i<x;i++) {
        if(x%i==0){
            ll a=i,b=x/i;
            ll lcm=(a*b)/__gcd(a,b);
            if(lcm==x) c=a,d=b;
        }
    }
    cout<<c<<" "<<d<<endl;
}


