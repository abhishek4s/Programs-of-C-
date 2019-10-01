
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
bool cmp(pair<int,char> a, 
              pair<int,char> b) 
{ 
    if(a.first == b.first) return a.second < b.second;
    return (a.first < b.first); 
} 

ll platforms(ll arr[], ll dept[], ll n){
	vector<pair<int, char> > v;
	for(ll i=0;i<n;i++){
		v.push_back({arr[i], 'a'});
		v.push_back({dept[i], 'd'});
	}

	sort(v.begin(), v.end(), cmp);
	ll maxPlatforms=1, currentPlatforms=0;

	for(auto x:v){
		if(x.second == 'a') currentPlatforms++;
		else currentPlatforms--;

		if(currentPlatforms > maxPlatforms) maxPlatforms = currentPlatforms;
	}

	return maxPlatforms;
}
int main(){
	ll t;
	cin>>t;
    while(t--){
    	ll n,a,d;
    	cin>>n;
    	ll arr[n], dept[n];
    	vector<pair<ll, ll>> v;
    	rep(i,0,n){
    		cin>>arr[i];
    	}

    	rep(i, 0 ,n){
    		cin>>dept[i];
    	}

    	cout<< platforms(arr, dept, n)<<endl;

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