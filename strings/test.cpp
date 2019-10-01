
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

int main(){
    ll n,m;
    cin>>n>>m;
    ll flag=1, k=0;
    ll arr1[n+1][m+1], arr0[n+1][m+1];
    ll count = 0;
    multimap<ll, ll> mp;
    memset(arr0, 0, sizeof(arr0));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>arr1[i][j];
            if(!arr1[i][j]) k++;
        }
    }

    vector<pair<ll, ll> > v;

    for(ll i=1;i<n;i++){
        for(ll j=1;j<m;j++){
            if(arr1[i][j]==1&&arr1[i][j+1]==1&&arr1[i+1][j]==1&&arr1[i+1][j+1]==1){
                arr0[i][j]=1;
                arr0[i][j+1]=1;
                arr0[i+1][j]=1;
                arr0[i+1][j+1]=1;
                mp.insert({i,j});
            }
        }
    }

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(arr1[i][j]!=arr0[i][j]){
                flag=0;
                break;
            }
        }
    }

    if(!flag){
        cout<<"-1";
    } else
    {
        if(k == m*n) cout<<0;
        else{
            cout<< mp.size()<<endl;
            for(auto x:mp){
                cout<<x.first<<" "<<x.second<<endl;
            }
        }
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