
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

int merge(int arr[], int temp[], int left, int mid, int right){
    int inv_count = 0;
    int i,j,k;

    i = left;
    j = mid;
    k = left;

    while((i <= mid-1) && (j <= right)){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        } else{
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while(i <= mid-1) temp[k++] = arr[i++];
    while(j <= right) temp[k++] = arr[j++];

    for(int i=left;i<=right;i++){
        arr[i] = temp[i];
    }

    return inv_count;

}

int _mergeSort(int arr[], int temp[],int left, int right){
    int inv_count = 0, mid;
    
    if(right > left){
    mid = (left+right)/2;
    inv_count = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);

    inv_count += merge(arr, temp, left, mid+1, right);
    }

    return inv_count;

}


int mergeSort(int arr[], int size){
    int temp[size];
    return _mergeSort(arr, temp, 0, size-1);
}







int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<< mergeSort(arr, n)<<endl;
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