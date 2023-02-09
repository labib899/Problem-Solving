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
    ll t,n,s,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vll s(n),f(n);
        for(int i=0;i<n;i++)cin>>s[i];
        for(int i=0;i<n;i++)cin>>f[i];
        vll ans;
        ans.pb(f[0]-s[0]);
        for(ll i=1;i<n;i++)
        {
            if(s[i]>=f[i-1])ans.pb(f[i]-s[i]);
            else ans.pb(f[i]-f[i-1]);
        }

        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
    }
}

