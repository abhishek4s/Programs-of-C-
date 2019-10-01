
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

// l and h are starting index of string
// ll minInsertions_Naive(string str, ll l, ll h){
//     if(l > h) return INT_MAX;
//     if(l == h) return 0;
//     if(l == h-1) return (str[l] == str[h])?0:1;

//     return (str[l]==str[h])?minInsertions(str, l+1, h-1):(min(minInsertions(str, l, h-1), minInsertions(str, l+1, h)))+1;
// }

ll minInsertions(string str, ll n){
    ll gap, table[n][n], l, h; // declare a table of n x n

    memset(table, 0 , sizeof(table));

    for(gap=1;gap<n;gap++){
        for(l=0, h=gap; h<n; ++l, ++h)
            table[l][h] = (str[l]==str[h])?table[l+1][h-1]:(min(table[l][h-1], table[l+1][h])+1);
    }

    return table[0][n-1];
}


int main(){
test(){
    string s;
    cin>>s;
    cout<<minInsertions(s, s.size())<<endl;
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