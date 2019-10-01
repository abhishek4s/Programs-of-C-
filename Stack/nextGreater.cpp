
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

void nextGreater(ll arr[], ll n){
	stack<ll> s;
	s.push(arr[0]);
	map<ll, ll> m;

	for(ll i=1;i<n;i++){

		if(s.empty()){
			s.push(arr[i]);
			continue;
		}

		while(s.empty() == false &&  arr[i]>s.top() ){
			m[s.top()] = arr[i];
			s.pop();
		}
		s.push(arr[i]);
	}

	while(!s.empty()){
		m[s.top()] = -1;
		s.pop();
	}

	for(ll i=0;i<n;i++){
		cout<< m[arr[i]]<<" ";
	}
	
	cout<<"exit"<<endl;
}

int main(){
test(){
	ll n;
	cin>>n;
	ll arr[n];
	rep(i,0,n){
		cin>>arr[i];
	}

	nextGreater(arr, n);
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