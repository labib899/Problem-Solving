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


int main()
{
    fastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,z; cin>>n>>z;
        vll v(n),w(n);
        ll maxi=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>maxi)maxi=v[i];
            w[i]=v[i] | z;
        }
        for(ll i=0;i<n;i++)
        {
            if(w[i]>maxi)maxi=w[i];
        }
        cout<<maxi<<endl;
    }
}




