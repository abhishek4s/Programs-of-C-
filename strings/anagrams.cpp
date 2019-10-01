// find wether the given two words are anagrams (they have the same letters in different order)
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

// bool checkAnagrams_maps(string s1, string s2){
// 	map <char, int> m;
// 	ll flag=1;
// 	for(ll i=0;i<s1.length();i++){
// 		m[s1[i]] = 1;
// 	}

// 	for(ll i=0;i<s2.length();i++){
// 		if(m[s2[i]] == 0){
// 			flag = 0;
// 			break;
// 		}
// 	}

// 	return flag;
// }

bool checkAnagrams(string s1, string s2){
	ll arr[26]={0}, flag=1;
	if(s1.length() != s2.length()){
		return 0;
	}
	for(ll i=0;i<s1.length();i++){
		arr[s1[i]-'a']++;
		arr[s2[i]-'a']--;
	}

	for(ll i=0;i<26;i++){
		if(arr[i]){
			flag=0;
			break;
		}
		
	}
	return flag;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;

		(checkAnagrams(s1, s2))? cout<< "YES":cout<<"NO";
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