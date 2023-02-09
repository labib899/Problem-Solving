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
        ll a=(ceil)((double)n/3),b=n/3,c=n/3;
        if(n%3==0)a++,c--;
        else if(n%3==1)a++,c--;
        else a++,b++,c--;
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
}




