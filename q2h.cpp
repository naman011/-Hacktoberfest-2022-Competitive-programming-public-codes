#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
#define pi pair<int,int>
#define ppre pair<int,pre>
#define vi vector<int>
#define vb vector<bool>
#define vpre vector<pre>
#define vvi vector<vi>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(),a.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repr(i,a,b) for (int i=a;i>=b;i--)
#define endl "\n" //for interactive comment it.


void solve(){
	int n,k;
	cin>>n>>k;

	vvi adj(n+1);
	int a,b;
	rep(i,0,n-1){
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	a=k;
	while(a-->0){
		cin>>b;
	}
	int ans=0;
	queue<int> q;
	vb vis(n+1,0); vis[1]=1;
	q.push(1);

	while(!q.empty()){
		int sz=q.size();
		if(k>=sz){
			ans+=sz;
			k-=sz;
		}else{
			break;
		}
		while(sz-->0){
			int a=q.front(); q.pop();
			for(int ch:adj[a]){
				if(!vis[ch]){
					q.push(ch);
					vis[ch]=1;
				}
			}
		}
	}
	cout<<ans<<endl;
}

void google(int i){
	cout<<"Case #"<<i<<": ";
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
 
	int t=1;
	cin>>t;   // just for practice...
	rep(i,1,t+1){
		google(i);
		solve();
	}

	return 0;
}