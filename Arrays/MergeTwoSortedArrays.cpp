
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

void MergeSortedArrays(ll arr1[], ll arr2[],ll n1, ll n2){
	ll arr3[10000], k=0, i=0, j=0;
	while(i<n1 && j<n2){
		if(arr1[i] <= arr2[j]){
			arr3[k] = arr1[i];
			i++;
		}
		else{
			arr3[k] = arr2[j];
			j++;
		}

		k++;
	}

	while(i < n1){
		arr3[k]=arr1[i];
		k++;
		i++;
	}

	while(j < n2){
		arr3[k]=arr2[j];
		k++;
		j++;
	}

	
}

int nextGap(int gap) 
{ 
	if (gap <= 1) 
		return 0; 
	return (gap / 2) + (gap % 2); 
} 

void MergeWithoutExtraSpace(ll *arr1, ll *arr2, ll n, ll m) 
{ 
	int i, j, gap = n + m; 
	for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) 
	{ 
		// comparing elements in the first array. 
		for (i = 0; i + gap < n; i++) 
			if (arr1[i] > arr1[i + gap]) 
				swap(arr1[i], arr1[i + gap]); 

		//comparing elements in both arrays. 
		for (j = gap > n - i-1 ? gap-n+i : 0 ; i < n&&j < m; i++, j++) 
			if (arr1[i] > arr2[j]) 
				swap(arr1[i], arr2[j]); 

		if (j < m) 
		{ 
			//comparing elements in the second array. 
			for (j = 0; j + gap < m; j++) 
				if (arr2[j] > arr2[j + gap]) 
					swap(arr2[j], arr2[j + gap]); 
		} 
	} 

	for(ll i=0; i < n; i++) cout<< arr1[i]<<" ";
		for(ll i=0; i < m; i++) cout<< arr2[i]<<" ";
} 


int main(){
ll t;
cin>>t;
while(t--){
	ll arr1[10000], arr2[10000], a, n1, n2;
	cin>> n1>>n2;

	for(ll i=0;i<n1;i++){
		cin>>arr1[i];
	}

	for(ll i=0;i<n2;i++){
		cin>>arr2[i];
	}

	MergeWithoutExtraSpace(arr1, arr2, n1, n2);	
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