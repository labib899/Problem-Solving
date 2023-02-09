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
        vll arr(n+1);
        for(ll i=1;i<=n;i++) cin>>arr[i];
        ll ans=0,x=0,y=n+1;
        for(ll i=1,j=n;i<j;)
        {
            if(arr[i]<arr[j])i++,arr[i]+=arr[i-1];
            else if(arr[i]>arr[j])j--,arr[j]+=arr[j+1];
            else ans+=(i-x)+(y-j),x=i,y=j,i++,j--;
        }
        cout<<ans<<endl;
    }
}


