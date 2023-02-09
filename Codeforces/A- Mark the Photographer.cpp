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
    ll t; cin>>t;
    while(t--)
    {
        ll n,x; cin>>n>>x;
        vll v(2*n);
        for(int i=0;i<2*n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        bool f=1;
        for(int i=0,j=n;i<n;i++,j++)
        {
            if(v[j]-v[i]<x)
            {
                f=0;
                break;
            }
        }
        if(f)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}




