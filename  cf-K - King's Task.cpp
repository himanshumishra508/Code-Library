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
bool vis[200005],vis1[200005];
int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
    int t,n,i,a,b,c,k,q,x,y,p,j,h;
    //cin>>t;
	t=1;
    while(t--)
    {
        cin>>n;
        int temp;
        vector <int> v,orig,sorted;
        int ans=0;
        rep(i,0,2*n)
        {
            cin>>a;
            v.pb(a);
            orig.pb(a);
            sorted.pb(a);
        }
        sort(all(sorted));
        if(v==sorted)
        {
            cout<<"0";
        }
        else
        {
            p=2*n;
            int f=0;
            for(i=n-1;i>=0;i--)
            {
                if(v[i]!=p)
                {
                    f=1;
                    break;
                }
                p--;
            }
            p=n;
            for(i=2*n-1;i>=n;i--)
            {
                if(v[i]!=p)
                {
                    f=1;
                    break;
                }
                p--;
            }
            if(f==0) cout<<"1";
            else
            {
                int ans1=0;
                int ans2=0;
                int baari=0; 
                int found=0;
                while(1)
                {
                    if(baari==0)
                    {
                        baari=1;
                        for(i=0;i<2*n;i+=2)
                        {
                            temp=v[i];
                            v[i]=v[i+1];
                            v[i+1]=temp;
                        }
                    }
                    else
                    {
                        baari=0;
                        for(i=0;i<n;i++)
                        {
                            temp=v[i];
                            v[i]=v[n+i];
                            v[n+i]=temp;
                        }
                    }
                    ans1++;
                    if(v==sorted)
                    {
                        found=1;
                        break;
                    }
                    if(v==orig)
                    {
                        break;
                    }
                }
                baari=1; 
                v=orig;
                while(1)
                {
                    if(baari==0)
                    {
                        baari=1;
                        for(i=0;i<2*n;i+=2)
                        {
                            temp=v[i];
                            v[i]=v[i+1];
                            v[i+1]=temp;
                        }
                    }
                    else
                    {
                        baari=0;
                        for(i=0;i<n;i++)
                        {
                            temp=v[i];
                            v[i]=v[n+i];
                            v[n+i]=temp;
                        }
                    }
                    ans2++;
                    if(v==sorted)
                    {
                        found=1;
                        break;
                    }
                    if(v==orig)
                    {
                        break;
                    }
                }
                if(found) cout<<min(ans1,ans2);
                else cout<<"-1";
            }
        }
    }
    return 0;
}