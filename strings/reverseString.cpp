// Q. Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.
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

string reverseString(string s1){
	string s="", temp="";
	for(ll i=s1.length()-1;i>=0;i--){
		if(s1[i] == '.'){
			reverse(temp.begin(), temp.end());
			s = s+temp;
			s=s+'.';
			temp="";
		} else{
			temp = temp+s1[i];
		}
	}
    reverse(temp.begin(), temp.end());
	s = s+temp;
	return s;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		cout<<reverseString(s1);
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