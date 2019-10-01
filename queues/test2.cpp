
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

class Node {
	public: 
		int data;
		Node *next;
		Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head){
	while(head!=NULL){
		cout<< head->data;
		head = head->next;
	}
}

 Node* insertEnd(Node* start, int data){
	Node *temp, *p = start;
	temp = new Node;
	temp->data = data;
	if(start == NULL){
		start = temp;
		temp->next = NULL;
		return start;
	}

	while(p->next != NULL) p = p->next;
	p->next = temp;
	temp->next = NULL;
	return start;
}


struct Node* insertBeg(Node* start, int data){
	Node *temp;
	temp = (Node *)malloc(sizeof(Node));
	if(start == NULL) {
		temp->data = data;
		temp->next = NULL;
		start = temp;
		return start;
	}
	temp->data = data;
	temp->next = start;
	start = temp;
	return start;
}

int main(){
	
	Node *start = NULL;
	int n, k;
	cin>>n;
	while(n--){
		cin>>k;
		start = insertEnd(start, k);
	}

	printList(start);
}

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/