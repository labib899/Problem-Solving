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

ld ncr(ld n,ld r);

int main()
{
    fastIO;
    ld n;
    cin>>n;
    cout<<(ll)(ncr(n,5)+ncr(n,6)+ncr(n,7));
}

ld ncr(ld n,ld r)
{
    ld x=1,y=1;
    for(ld i=1;i<=r;i++,n--)x*=n;
    for(ld i=1;i<=r;i++)y*=i;

    return x/y;
}

