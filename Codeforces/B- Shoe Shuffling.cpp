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
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vll v(n);
        map<ll,ll> m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        bool f=1;
        for(auto x:m)
        {
            if(x.second==1)
            {
                f=0;
                break;
            }
        }
        if(!f)cout<<-1<<endl;
        else 
        {   
            ll s=1,t,j,k=0;
            for(auto x:m)
            {   
                t=s;
                j=x.second;
                k+=j;
                for(ll i=1;i<=j-1;i++)cout<<t+i<<" ";
                cout<<s<<" ";
                s=k+1;
            }
            cout<<endl;
        }
    }
}
