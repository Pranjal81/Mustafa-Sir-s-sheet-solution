/****************

	Link- 		https://codeforces.com/contest/651/problem/C
	author- 	pb_18

****************/

#include<bits/stdc++.h>
using namespace std;
	
	#define 	ll 					 	long long
	#define 	endl 					"\n"
	#define 	int 					long long
	#define 	fo(i,n)					for(i=0;i<n;i++)
	#define 	re(i,n)					for(i=n-1;i<=0;i--)
	#define 	pb 						push_back
    #define 	mp 						make_pair
	#define 	vi 						vector<int>
	#define 	pii 					pair<int,int>
	#define 	mii 					map<int,int>
	#define 	umii 					unordered_map<int,int>
	#define 	si 						set<int>
	#define 	usi 					unordered_set<int>
	#define 	fast 					ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	#define		big						LONG_LONG_MAX
	#define 	small					LONG_LONG_MIN
	#define 	all(x) 					x.begin(), x.end()

int mod = pow(10,9)+7;
int inf=1e18;
map<pii,int> ma;
umii x,y;

int Log2(int x){
	int ans=0;
	while(x>>=1)	ans++;
	return ans;
}

void solve(){
	int n;	cin>>n;
	int i;
	fo(i,n){
		int a,b;	cin>>a>>b;
		pii p=mp(a,b);
		ma[p]++;
		x[a]++;
		y[b]++;
	}

	int ans=0;
	for(auto it: x){
		ans+=(it.second)*(it.second-1)/2;
		
	}
	for(auto it: y){
		ans+=(it.second)*(it.second-1)/2;
	}
	for(auto it: ma){
		ans-=(it.second)*(it.second-1)/2;
	}

	cout<<ans<<endl;
}

void pb_18(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int t=1;
	while(t--)	solve();
}

int32_t main(){
	fast
	pb_18();
	return 0;
}
