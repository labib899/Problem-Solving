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

int a[5]={600,60,0,10,1};
int pal[16]={0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412};

int main()
{
    fastIO;
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int x; cin>>x;
        int total=0;
        for(int i=0;i<5;i++) total+=(int)(s[i]-'0')*a[i];
        set<ll> m;
        for(int i=0;i<1500;i++)
        {
            m.insert(total);
            total=(total+x)%1440;
        }
        ll ans=0;
        for(auto i:m)
        {
            for(auto j:pal)
            {
                if(i==j)
                {
                    ans++;
                    break;
                }
            }
        }
        cout<<ans<<endl;
        m.clear();
    }
}



