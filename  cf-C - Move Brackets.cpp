#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,n,m,i,s,k,q,j,x,y; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		stack <char> st;
		ll ans=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='(')
			{
				st.push(s[i]);
			}
			else
			{
				if(st.empty())
					ans++;
				else
				{
					st.pop();
				}
				
			}
			
		}
		cout<<ans<<endl;
	}
	return 0;
}
