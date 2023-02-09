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
        vll a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        ll maxD=0,minD=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            if(b[i]==0)
            {
                maxD=max(maxD,a[i]);
            }
            else
            {
                maxD=max(maxD,a[i]-b[i]);
                minD=min(minD,a[i]-b[i]);
            }
        }

        if(maxD<=minD)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}

