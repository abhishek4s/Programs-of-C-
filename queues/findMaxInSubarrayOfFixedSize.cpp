
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000003
#define V vector<int>
#define pii pair<int,int>
#define VP vector< pii >
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define all(v) (v).begin(),(v).end()
#define S(x) scanf("%d",&(x))
#define S2(x,y) scanf("%d%d",&(x),&(y))
#define SL(x) scanf("%lld",&(x))
#define SL2(x) scanf("%lld%lld",&(x),&(y))
#define test() ll t;cin>>t;while(t--)
#define P(x) printf("%d\n",(x))
#define FF first
#define SS second

using namespace std;

void findMaxInSubarray(ll *arr, ll n, ll k) {
	ll max_upto[n];
	stack<ll> s;
	s.push(0);

	for(ll i=1;i<n;i++){
		while(!s.empty() && arr[i]>arr[s.top()]){
			max_upto[s.top()] = i-1;
			s.pop(); 
		}
		s.push(i);
	}
	while(!s.empty()) {
		max_upto[s.top()] = n-1;
		s.pop();
	}

	ll j=0;
	for(ll i=0;i<=n-k;i++){
		while(j<i || max_upto[j]<i+k-1)
			j++;

		cout<< arr[j]<<" ";
	}
}

int main(){
test(){
	ll n, k;
	cin>>n>>k;
	ll arr[n];
	rep(i,0,n){
		cin>>arr[i];
	}

	findMaxInSubarray(arr, n, k);
	cout<<endl;
}
return 0;
}

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/