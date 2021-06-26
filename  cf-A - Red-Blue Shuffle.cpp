#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
ll power(ll x, unsigned ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod 1000000007
#define elif else if
#define INF 1e18+7


int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
	ll t,n,q,l,r,a,b,c,x,y,i,j,p,h,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s1,s2;
		cin>>s1;
		cin>>s2;
		ll c1=0,c2=0;
		rep(i,0,n)
		{
			if(s1[i]>s2[i]) c1++;
			else if(s2[i]>s1[i]) c2++;
		}
		if(c1>c2) cout<<"RED\n";
		else if(c2>c1) cout<<"BLUE\n";
		else cout<<"EQUAL\n";
	}
	return 0;
}