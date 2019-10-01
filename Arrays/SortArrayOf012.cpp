#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,a;
        cin>>n;
        map<ll, ll> m;
        for(ll i=0;i<n;i++){
            cin>>a;
            m[a]++;
        }
        for(auto x: m){
            while(x.second--){
                cout<<x.first<<" ";
            }
        }

        cout<< endl
    }
}