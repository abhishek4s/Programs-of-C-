
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

int main(){
	ll n=10;
	float x[n];
	float y[n];
	for(ll i=0;i<n;i++)
	{
		x[i]=rand()%10000;
		y[i]=rand()%10000;
		x[i]=x[i]/100;
		y[i]=y[i]/100;
	}
	float xg=50,yg=0;
	for(ll i=0;i<n;i++)
	{
		cout<<sqrt(pow(x[i]-xg,2)+pow(y[i]-yg,2) ) <<endl;
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