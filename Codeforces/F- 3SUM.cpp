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
        ll n; cin>>n;
        vll v,cnt(10,0);
        for(ll i=1;i<=n;i++)
        {
            ll x; cin>>x;
            cnt[x%10]++;
        }
        for(ll i=0;i<10;i++)
        {
            for(ll j=0;j<min(cnt[i],3LL);j++)v.pb(i);
        }
        bool f=0;
        int m=v.size();
        for(ll i=0;i<m-2;i++)
        {
            for(ll j=i+1;j<m-1;j++)
            {
                for(ll k=j+1;k<m;k++)
                {
                    if((v[i]+v[j]+v[k])%10==3)
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}


