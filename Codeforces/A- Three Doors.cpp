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
    solve();
}

void solve()
{
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        vi v(4);
        v.pb(-1);
        for(int i=1;i<=3;i++) cin>>v[i];
        int a=v[x];
        int b=v[a];
        int c=v[b];
        if(a==0 || b==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}



