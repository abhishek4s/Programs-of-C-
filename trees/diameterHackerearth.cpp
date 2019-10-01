
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

struct node {
	struct node* left;
	struct node* right;
	int data;
};

int d = 0;
void preOrderTraversal(struct node *root) {
	if(root == NULL) return;
	cout<< root->data;
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

struct node *addNode(struct node *root, string s, int data) {
	struct node* newNode = new node;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->data = data;

	struct node* temp = root;
	int len = s.length();
	for(int i=0;i<len-1;i++) {
		if(s[i] == 'L') temp = temp->left;
		else temp = temp->right;
	}
	(s[len-1] == 'L') ? temp->left = newNode : temp->right = newNode;
	return root;
}

int height(struct node *root) {
	if(root == NULL) return 0;
	int a = height(root->left);
	int b = height(root->right);
	d = max(d, a+b+1);
	return max(a,b)+1;
}

int diamter(struct node *root) {
	height(root);
	return d;
}
int main(){
	int n, x, d, maxLen = 0;
	string s;
	cin>>n>>x;
	vector<pair<string, int> > v;

	struct node *root = new node;
	root->left = NULL;
	root->right = NULL;
	root->data = x;

	rep(i,0,n-1) {
		cin>>s>>d;
		v.push_back({s, d});
		if(s.length() > maxLen) maxLen = s.length();
	}
    
    sort(v.begin(), v.end());
    for(auto x:v) {
    	root = addNode(root, x.first, x.second);
    }
	cout<< diamter(root);
return 0;
}

/*
Code by : 
Rishabh Patel
Integrated Post Graduation (IPG)
Indian Institute of Information Technology and Management, Gwalior (ABV-IIITM Gwalior)
In order to understand recursion, one must first understand recursion. 
*/