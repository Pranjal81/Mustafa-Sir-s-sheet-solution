/***************************

	    Link - https://codeforces.com/problemset/problem/515/C
	    author - pb_18

****************************/

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

int Log2(int x){
	int ans=0;
	while(x>>=1)	ans++;
	return ans;
}

void solve(){
	int n;	cin>>n;
	int num;	cin>>num;
	vi arr;	
	while(num!=0){
		arr.pb(num%10);
		num/=10;
	}

	vi ans;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==1 || arr[i]==0)	continue;
		else if(arr[i]==4){
			ans.pb(3);
			ans.pb(2);
			ans.pb(2);
		}
		else if(arr[i]==6){
			ans.pb(5);
			ans.pb(3);
		}
		else if(arr[i]==8){
			ans.pb(2);
			ans.pb(2);
			ans.pb(2);
			ans.pb(7);
		}
		else if(arr[i]==9){
			ans.pb(7);
			ans.pb(3);
			ans.pb(3);
			ans.pb(2);
		}
		else{
			ans.pb(arr[i]);
		}
	}

	sort(ans.begin(),ans.end(),greater<int>());
	for(auto it: ans)	cout<<it;
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
