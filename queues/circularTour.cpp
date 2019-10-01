
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

bool checkPossible(queue<pair<int, int> > q) {
	int p = 0;
	int n = q.size();
	int p = 0;
	for(int i=0;i<n;i++) {
		pair<int, int> temp;
		temp = q.front();
		p = p+temp.first;
		if(temp.second > p){
			return false;
		}

		q.pop();		
	}
}


using namespace std;

int main(){
test(){
	int n;
	cin>>n;
	queue<pair<int, int> > q;
	int a,b; 
	for(int i=0; i<n;i++){
		cin>>a>>b;
		q.push({a,b});
	}

	int flag =-1;

	for(int i=0;i<n;i++){
		if(checkPossible(q)) {
			flag=i;
		};
		else {
			pair<int, int> temp;
			temp = q.front();
			q.pop();
			q.push(temp);
		}
	}

	cout<< flag;
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