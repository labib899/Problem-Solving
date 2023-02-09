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
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vll v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        if(n&1)cout<<"Mike"<<endl;
        else
        {
            ll mini=INT_MAX;
            ll x=0;
            for(ll i=0;i<n;i++)
            {
                if(v[i]<mini) mini=v[i],x=i;
            }
            if(x&1)cout<<"Mike"<<endl;
            else cout<<"Joe"<<endl;
        }
    }
}

