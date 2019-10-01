
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

int d = 0;

struct node {
		int data;
		struct node *left;
		struct node *right;
};

struct node *newNode(int data) {
	struct node *treeNode = new node;
	treeNode->data = data;
	treeNode->left = NULL;
	treeNode->right = NULL;
	return treeNode;
}

int height(struct node *root) {
	if(root == NULL) return 0;
	int a = height(root->left);
	int b = height(root->right);
	d = max(d, a+b+1);
	return max(a,b)+1;
}

int main(){

			/* 
		           1 
		       /       \ 
		      2          3 
		    /   \        
		   4     5    
		        /
		       6 
		*/

	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->right->left = newNode(6);
	height(root);
	cout<< d;

return 0;
}

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/