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

ll fsum(string s);

int main()
{
    ll t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;
        ll start1=-1,end1=-1;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                start1=i;
                break;
            }
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                end1=i;
                break;
            }
        }

        string a=s,b=s;
        if(start1<=k && start1>=0)swap(a[start1],a[0]);
        if(n-1-end1<=k-start1 && end1>=0)swap(a[end1],a[n-1]);
        if(n-1-end1<=k && end1>=0)swap(b[end1],b[n-1]);
        if(start1<=k-(n-1-end1) && start1>=0)swap(b[start1],b[0]);

        if(start1<0)cout<<fsum(s)<<endl;
        else cout<<min(fsum(a),min(fsum(b),fsum(s)))<<endl;
    }
}

ll fsum(string s)
{
    ll sum=0;
    for(int i=0;i<s.size()-1;i++)
    {
        sum+=(s[i]-'0')*10 + (s[i+1]-'0');
    }
    return sum;
}

