#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long int lt;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<int> vin;
typedef pair<ll,ll> pll;
typedef pair<int,int> pin;
#define all(a) a.begin(),a.end()
#define rep(i,a,b) for(int i=a;i<b;++i)
#define f(i,b) for(int i=0;i<b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
#define test(t) int t; cin>>t; while(t--) solve()
#define endl "\n"
#define p1 cout<<"YES"<<endl
#define p0 cout<<"NO"<<endl
#define fst ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define read(x) for(auto &i:x) cin>>i;
#define print(x) for(auto i:x) cout<<i<<" "; cout<<endl;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 
template <class K, class V> using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

const int mod=1e9+7;

ll mod_pow(ll a,ll n,ll mod)	//(a^n)%mod
{	ll res=1;
	while(n){	if(n&1)	res=(res*a)%mod; n/=2; a=(a*a)%mod;	}
	return res;
}

/*
Loading....

t1 t2 t3 ..........

3 different topics easy //choose three multiply them

pick 2 different topic //

pick from same topic easy O(noOfTopics)

total - no of choice which have 2 same difficulties and 2 same topics

t1 
t1 d2
   d2

*/

void solve()
{
    ll n;
    cin>>n;

    vector<pll> a(n);
    map<ll, ll> mp1, mp2;

    for (ll i = 0 ; i < n; i++) {
        cin>>a[i].first>>a[i].second;
        mp1[a[i].first]++;
        mp2[a[i].second]++;
    }

    ll res = n*(n-1)*(n-2) / 6;

    for (ll i = 0; i < n; i++) {
        res -= (mp1[a[i].first] - 1)*(mp2[a[i].second]-1);
    }

    cout<<res<<endl;

}

int main()
{
    fst;
    int t=1;
    cin>>t;

    for(int i=1;i<=t;++i)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }

}
