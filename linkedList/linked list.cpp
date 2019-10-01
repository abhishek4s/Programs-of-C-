
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

class node{
public:
	int data;
	node *next;
};

void printList(node *head){
	node *itr = head;
	while(itr!=NULL){
		cout<<itr->data;
		itr = itr->next;
	}
}

int main(){
	// int *p = NULL;
	// p = &x;
	// cout<<*p;

	node *first = NULL;
	node *second = NULL;
	node *third = NULL;
	node *head = first;

	head = new node();
	first = new node();
	second = new node();
	third = new node();
	head->data = 10;
	head->next = first;
	first->data = 3;
	first->next = second;
	second->data = 4;
	second->next = third;
	third->data = 5;
	third->next = NULL;

	printList(head);


return 0;
}

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/