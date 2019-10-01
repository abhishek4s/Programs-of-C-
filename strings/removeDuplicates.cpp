// C++ program too create a unique string using unordered_map 

/* access time in unordered_map on is O(1) generally if no collisions occur 
and therefore it helps us check if an element exists in a string in O(1) 
time complexity with constant space. */

#include <bits/stdc++.h> 
using namespace std; 
char* removeDuplicates(char *s,int n){ 
unordered_map<char,int> exists; 
int index = 0; 
for(int i=0;i<n;i++){ 
	if(exists[s[i]]==0) 
	{ 
	s[index++] = s[i]; 
	exists[s[i]]++; 
	} 
} 
return s; 
} 

string removeDuplicates1(string s, int n){
	unordered_map<char, int> ex;
	int index=0;
	string s1;
	for(int i=0;i<n;i++){
		if(ex[s[i]] == 0){
			s[index++] = s[i];
			ex[s[i]]++;
		}
	}

	s1 = s.substr(0, index);
	return s1;
}
//driver code 
int main(){ 
int t;
cin>>t;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
while(t--){
	string s;
	getline(cin, s);
	cout<<removeDuplicates1(s, s.length())<<endl;
}
return 0; 
} 
