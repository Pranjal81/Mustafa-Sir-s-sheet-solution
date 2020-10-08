/***************************

	    Link:		https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1335
	    author: 	pb_18

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
	
#define m 20000005
int mod = pow(10,9)+7;
int inf=1e18;

bool sieve[m];
vector<pii > twins;

void create_sieve(){
	for(int i=2;i*i<m;i++){
		if(!sieve[i]){
			for(int j=i*i;j<m;j=j+i){
				sieve[j]=true;
			}
		}
	}

	for(int i=2;i<m;i++){
		if(!sieve[i] && !sieve[i+2]){
			pii p= mp(i,i+2);
			twins.pb(p);
		}
	}
}

int Log2(int x){
	int ans=0;
	while(x>>=1)	ans++;
	return ans;
}

void pb_18(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    create_sieve();
	int n;
    while(scanf("%d",&n)==1){
    	cout<<"("<<twins[n-1].first<<", "<<twins[n-1].second<<")"<<endl;
    }
}

int32_t main(){
	fast
	pb_18();
	return 0;
}
