
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

bool checkPalindrom(string s){
	ll l = 0;
	ll n = s.size();
	ll r = n-1;

	for(ll i=l; i<n/2; i++){
		if(s[l+i] != s[r-i]) return 0;
	}

	return 1;

}

void largestPalindromicSubstr(string s){
	ll n = s.size();
	bool table[n][n];
	ll maxLength = 1;

	memset(table, 0, sizeof(table));
	// for i=j table[i][j]=1
	ll start=0;
	for(ll i=0;i<n;i++){
		table[i][i]=1;
	}

	for(ll j=0;j<n-1;j++){
		if(s[j] == s[j+1]){
			start=j;
			maxLength = 2;
			table[j][j+1] = 1;
		}
	}

	for(ll k=3;k<=n;k++){
		for(ll i=0;i<n-k+1;i++){
			ll j;
			j = i+k-1;

			if(table[i+1][j-1] && s[i]==s[j]){
				table[i][j]=1;
				if(k > maxLength){
					start = i;
					maxLength = k;
				}
			}
		}
	}

	cout<< start<< maxLength<<" ";
	cout<< s.substr(start, maxLength-1);
}
int main(){
	ll t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	largestPalindromicSubstr(s);
	cout<<endl;
	}
	
}

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/