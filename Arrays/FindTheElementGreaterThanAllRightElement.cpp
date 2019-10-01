// Q. Find all the elements that are greater than or equal to all their corresponding elements.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, a[100000], currentLargest, b;
        cin>>n;
        vector<int> v;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        
        currentLargest = a[n-1];
        b = currentLargest;
        
        for(ll i=n-2;i>=0;i--){
            if(a[i] >= currentLargest){
                v.push_back(a[i]);
                currentLargest = a[i];
            }
        }
        
        reverse(v.begin(), v.end());
        
        for(auto x:v)
        cout<< x<<" ";
        
        cout<<b<<endl;
    }
}