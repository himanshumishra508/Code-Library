#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define ff first
#define ss second
#define pb push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
int ceil(int a,int b){return (a+b-1)/b;}
int gcd(int a,int b){if(b==0) return a;return gcd(b,a%b);}
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
int mod=1e9+7;
#define elif else if
#define INF 1e18+7

int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
    int t,n,i,a,b,c,k,q,x,y,p,j,l,r;
    cin>>t;
	//t=1;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        if(n%3!=0) cout<<"NO\n";
        else
        {
            multiset<int> m,tt;
            int cnt1=0,cnt2=0;
            rep(i,0,n)
            {
                if(s[i]=='M')
                {
                    cnt1++;
                    m.insert(i);
                }
                else
                {
                    cnt2++;
                    tt.insert(i);
                }
            }
            auto it1=tt.begin();
            int f=0;
            for(auto it:m)
            {
                //cout<<it<<" "<<*it1<<endl;
                if(it1!=tt.end())
                {
                    if(*it1<it)
                    {
                        it1++;
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    f=1;
                    break;
                }
            }
            for(auto it:m)
            {
                if(it1!=tt.end())
                {
                    if(*it1>it)
                    {
                        it1++;
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    f=1;
                    break;
                }
            }
            if(f || 2*cnt1!=cnt2) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}