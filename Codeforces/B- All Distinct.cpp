#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
#define For(i,n,k) for(ll i=0;i<n;i+=k)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
 
bool palindrome(string s);
 
int main()
{
    fastIO;
    ll t,n; cin>>t;
    while(t--)
    {
        cin>>n;
        vll v(n);
        set<ll> s;
        For(i,n,1) cin>>v[i],s.insert(v[i]);
        ll x=s.size();
        if((x+n)%2==0)cout<<x<<endl;
        else cout<<x-1<<endl;
    }
}

