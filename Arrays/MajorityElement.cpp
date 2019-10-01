// Q. Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,flag=0, a;
	    cin>>n;
	    map<int, int> m;
	    for(ll i=0;i<n;i++){
	    	cin>>a;
	        m[a]++;
	    }
	    
	    for(auto x:m){
	       if(x.second > n/2){
	           cout<< x.first<< endl;
	           flag=1;
	           break;
	       }
	       
	       // cout<< x.first<<" "<<x.second<<endl;
	    }
	    
	    if(!flag) cout<< "-1"<<endl;
	}
	return 0;
}