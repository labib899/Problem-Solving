#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


int main()
{
    fastIO;
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vll v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll c=0;
        for(int i=1;i<n-1;i++)
        {
            if(v[i]>(v[i-1]+v[i+1]))c++;
        }
        if(k==1)
        {
            c=(n+1)/2-1;
            cout<<c<<endl;
        }
        else cout<<c<<endl;
    }
}

