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

void solve();

int main()
{
    fastIO;
    ll t; cin>>t;
    while(t--) solve();
}

void solve()
{
    ll n; cin>>n;
    vll v(n);
    ll pos=0,neg=0,zero=0;
    map<ll,ll> m;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
        if(v[i]<0)neg++;
        else if(v[i]>0)pos++;
        else zero++;
        if(zero>1)m[0]=1;
    }
    if(pos>2)
    {
        cout<<"no"<<endl;
        return;
    }
    else if(neg>2)
    {
        cout<<"no"<<endl;
        return;
    }
    else
    {
        vll arr;
        for(auto x:m)
        {
            for(int i=1;i<=x.second;i++) arr.pb(x.first);
        }
        int s=arr.size();
        for(int i=0;i<s-2;i++)
        {
            for(int j=i+1;j<s-1;j++)
            {
                for(int k=j+1;k<s;k++)
                {
                    ll x=arr[i]+arr[j]+arr[k];
                    if(m[x]==0)
                    {
                        cout<<"no"<<endl;
                        return ;
                    }
                }
            }
        }
        cout<<"yes"<<endl;
    }
}


