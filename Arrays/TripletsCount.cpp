// Q. Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

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

void countTriplets(ll arr[], ll n){
	sort(arr, arr+n);
	ll j,k,count=0;

	for(ll i=n-1;i>=0;i--){
		j=0;
		k=i-1;
		while(k>j){
			if(arr[j]+arr[k] == arr[i]){
				count++;
				k--;
			}

			else if(arr[j]+arr[k] < arr[i]){
				j++;
			}
			else{
				k--;
			}
		}
	}

	if(count) cout<< count<<endl;
	else cout<<"-1"<<endl;


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

		countTriplets(arr, n);
	}
	
 }

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/


// naive approach O(n^2) with map



// #include<bits/stdc++.h>
// #define ll long long
// #define MAX 1000003
// #define V vector<int>
// #define pii pair<int,int>
// #define VP vector< pii >
// #define MOD 1000000007
// #define mp make_pair
// #define pb push_back
// #define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
// #define all(v) (v).begin(),(v).end()
// #define S(x) scanf("%d",&(x))
// #define S2(x,y) scanf("%d%d",&(x),&(y))
// #define SL(x) scanf("%lld",&(x))
// #define SL2(x) scanf("%lld%lld",&(x),&(y))
// #define P(x) printf("%d\n",(x))
// #define FF first
// #define SS second
// using namespace std;

// int main(){

// 	ll t;
// 	cin>>t;
// 	while(t--){
// 	map<int, int> m;
// 	ll n, arr[100000],a, count=0;
// 	cin>>n;
// 	rep(i,0,n){
// 		cin>>a;
// 		arr[i]=a;
// 		m.insert({a,1});
// 	}

// 	for(ll i=0;i<n;i++){
// 		for(ll j=i+1;j<n;j++){
// 			if(m[arr[i]+arr[j]]) count++;
// 		}
// 	}

// 	if(count) cout<< count<<endl;
// 	else cout<<"-1"<<endl;
// 	}
	
// }

