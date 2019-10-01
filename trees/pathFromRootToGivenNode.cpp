
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

bool findPath(struct node* root, vector<int> &v, int k) {
	if(root == NULL) return false;
	v.push_back(root->data);

	if(root->data == k) return true;
	if(root->left && findPath(root->left, v, k)) return true;
	if(root->right && findPath(root->right, v, k)) return true;

	v.pop_back();
	return false;
}

bool findNode(struct node* root, struct node **fN, int k){
	if(root == NULL) return false;

	if(root->data == k) {
		*fN = root;
		return true;
	}

	if(root->left && findNode(root->left, fN, k)) return true;
	if(root->right && findNode(root->right, fN, k)) return true;

	return false;

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
	// Enter the node for finding its findPath
	// int k;
	// cin>>k;
	vector<int> v;
	// findPath(root, v, k);
	// for(auto x:v) cout<< x<<" ";

	
	// struct node *t;
	// cout<<findNode(root, &t, 4)<<" ";
	// cout<< t->data;


return 0;
}

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/