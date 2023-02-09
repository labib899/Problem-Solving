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


ll ncr(ll n,ll r);

int main()
{
    fastIO;
    ll n,s;
    cin>>n>>s;
    if(n<=s/2)
    {
        cout<<"YES"<<endl;
        if(s%2==0)
        {
            for(int i=1;i<=n-1;i++)cout<<2<<" ";
            cout<<s-2*(n-1)<<endl;
            cout<<1<<endl;
        }
        else
        {
            for(int i=1;i<=n-1;i++)cout<<1<<" ";
            cout<<s-(n-1)<<endl;
            cout<<s/2<<endl;
        }
    }
    else cout<<"NO"<<endl;
}

