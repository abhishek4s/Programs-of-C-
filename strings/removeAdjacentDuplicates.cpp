#include <bits/stdc++.h>
using namespace std;

#define ll long long
string removeDuplicateUtils(string s){
    ll i=0;
    while(i<s.size()){
        if(s[i]==s[i+1]){
            while(s[i]==s[i+1]){
            	s.erase(i,1);
            }
            s.erase(i,1);
        }
        else  i++;
    }
    
    return s;
}

string removeDuplicate(string s){
	string sC="", sP="";
	sC = removeDuplicateUtils(s);

	while(sC.size() != sP.size()){
		sP = sC;
		sC = removeDuplicateUtils(sC);
	}

	return sC;

}

int main(){
    ll t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	cout<< removeDuplicate(s)<<endl;
    } 
}