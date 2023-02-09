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

ll mod=1e9+7;

int main()
{
    fastIO;
    ll t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x==1)cout<<3<<endl;
        else if(x%2)cout<<1<<endl;
        else
        {
            ll c=0,n=x;
            while(n)
            {
                n/=2;
                c++;
                if(n%2)break;
            }
            ll m=pow(2,c);
            if((m&x) && (m^x))cout<<m<<endl;
            else cout<<m+1<<endl;
        }
    }
}




