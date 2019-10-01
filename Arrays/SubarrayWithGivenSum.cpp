

// Q. Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S. 
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

int subarrayWithSum(ll arr[], ll n, ll sum){
	ll currentSum = arr[0], start=0,i;

	// loop enters in i only when the sum is not present amongst arr[0..i-1]
	// the while loop checks every possible subarray wether the sum is  
	for(i=1;i<=n;i++){
		while(currentSum > sum  && start < i-1 ){
			currentSum-=arr[start];
			start++;
		}

		if(currentSum == sum){
			cout<< start+1<<" "<<i-1+1<<endl;
			return 0;
		}

		if(i<n){
			currentSum = currentSum+arr[i];
		}
	}

	cout<< "-1"<<endl;

	return 0;
}

int main(){

	ll t;
	cin>>t;
	while(t--){
		ll n, arr[100000], sum;
		cin>>n>>sum;
		for(ll i=0;i<n;i++){
			cin>> arr[i];
		}

		subarrayWithSum(arr, n, sum);
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