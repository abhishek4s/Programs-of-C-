// Q. Find the subarray with max product
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

void SubarrayWithMaxProduct(ll arr[], ll n){
	if(n==1 && arr[0]==-1){
		cout<< "-1"<<endl;
	} 
	else{
			ll *p;
			p = max(arr, arr+n);

			ll maxSoFar = 1, maxEndingHere = 1, minEndingHere = 1, flag=0, temp,count = 0;
			for(ll i = 0; i<n; i++){
				if(arr[i] > 0){
					maxEndingHere = maxEndingHere*arr[i];
					minEndingHere = min(minEndingHere*arr[i], (ll)1);
					flag = 1;
				}

				else if(arr[i] == 0){
					maxEndingHere = 1;
					minEndingHere = 1;
				}

				else {
					temp = maxEndingHere;
					maxEndingHere = max(minEndingHere*arr[i], (ll)1);
					minEndingHere = min(temp*arr[i], (ll)1);
					count++;
				}

				if(maxEndingHere > maxSoFar) maxSoFar = maxEndingHere;
			}

			if(flag == 0 && maxSoFar == 1 && count <= 1){
				cout<< "0"<<endl;
			}
			else{
				cout<< maxSoFar<<endl;
			}
	    }
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

		SubarrayWithMaxProduct(arr, n);
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