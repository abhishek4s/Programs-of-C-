
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

void squareByValue(int n){
	cout<<"Address of n1 in function : "<<&n<<endl;
	n*=n;
	cout<< "Value of n1 in function : " << n<<endl;
	
}

// explicit dereferencing with (*)
void squareByReferenceOfPointers(int *n) {
	cout<<"Address of n1 in function : "<<n<<endl;
	*n*=*n;
	cout<< "Value of n1 in function : " << *n<<endl;
}
// explicit dereferencing without (*)
void squareByReferenceOfReference(int &n){
	cout<<"Address of n1 in function : "<<&n<<endl;
	n*=n;
	cout<< "Value of n1 in function : " << n<<endl;
	
}

int main(){
	int n1 = 10;
	// by value: 
	cout<< "Address of n1 " << &n1<<endl;
	squareByValue(n1);
	cout<< "Value of n1 in main " <<n1;

	cout<<"----------------------------------------------------------------"<<endl;
	// by reference with pointer arguments
	int n2 = 10;
	// by reference: 
	cout<< "Address of n2 " << &n2<<endl;
	squareByReferenceOfPointers(&n2);
	cout<< "Value of n2 in main " <<n2;

	cout<<"----------------------------------------------------------------"<<endl;
	// by reference with address arguments
	int n3 = 10;
	// by reference: 
	cout<< "Address of n2 " << &n3<<endl;
	squareByReferenceOfReference(n3);
	cout<< "Value of n2 in main " <<n3;

	cout<<"----------------------------------------------------------------"<<endl;

return 0;
}

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/