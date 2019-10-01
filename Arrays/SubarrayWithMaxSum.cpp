
// Q. Subarray with max sum (Kaden's Algorithm)
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
#define P(x) printf("%d\n",(x))
#define FF first
#define SS second
using namespace std;
void maxSumInArray(ll arr[], ll n){
	ll maxSoFar=INT_MIN, maxEndingHere=0;

	for(ll i = 0; i < n; i++){
		maxEndingHere = maxEndingHere + arr[i];
		if(maxEndingHere > maxSoFar){
			maxSoFar = maxEndingHere;
		}

		if(maxEndingHere < 0){
			maxEndingHere = 0;
		}
	}

	if(maxSoFar) cout<< maxSoFar<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n, arr[100000];
		cin>>n;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}

		maxSumInArray(arr, n);
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