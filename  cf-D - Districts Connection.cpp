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
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod 1000000007
#define elif else if


int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,n,q,i,j,a,b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map <ll,vector<ll>> m;
		for(i=0;i<n;i++)
		{
			cin>>a;
			m[a].pb(i+1);
			// s.insert(a);
			// v[a].pb(i+1);
		}
		if(m.size()==1) cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			auto it=m.begin();
			ll p=m[it->first][0];
			it++;
			for(;it!=m.end();it++)
			{
				ll f=0;
				ll p1=0;
				for(auto it1:m[it->first])
				{
					if(f==0)
					{
						f=1;
						p1=it1;
						cout<<p<<" "<<it1<<endl;
					}
					else
					{
						cout<<p<<" "<<it1<<endl;
					}
				}
				p=p1;
			}
			it=m.begin();
			auto it1=m[it->first].begin();
			it1++;
			for(;it1!=m[it->first].end();it1++)
			{
				cout<<p<<" "<<*it1<<endl;
			}
		}
		
	}
	return 0;
}