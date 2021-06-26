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
	ll t,n,q,l,r,a,b,c,x,y,i,j,m,p,h,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		string s[n+1];
		ll dp[n+1][m+1];
		clr(dp,0);
		rep(i,0,n)
		{
			cin>>s[i];
		}
		rep(i,0,n)
		{
			rep(j,0,m)
			{
				if(s[i][j]=='*')
				{
					dp[i][j]=1;	
				}
			}
		}
		for(i=n-2;i>=0;i--)
		{
			for(j=1;j<m-1;j++)
			{
				if(dp[i][j]==1)
					dp[i][j]=min(dp[i+1][j],min(dp[i+1][j-1],dp[i+1][j+1]))+1;
			}
		}
		ll cnt=0;
		rep(i,0,n)
		{
			rep(j,0,m)
			{
				cnt+=dp[i][j];
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}