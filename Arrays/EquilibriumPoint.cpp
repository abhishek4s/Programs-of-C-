// Q. Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
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

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, sum1, sum2, i, j, flag=0;
        cin>>n;
        ll arr[n];
        rep(i,0,n){
            cin>>arr[i];
        }

        i=0;
        j=n-1;
        sum1 = arr[i];
        sum2 = arr[j];
        
        if(n==1)
        {
            cout<< "1"<< endl;
            flag=1;
        }
        else{
             while(j-i >= 2){
            if(sum1 ==sum2 && j-i==2){
                cout<< i+2<<endl;
                flag=1;
                break;
            }

            else if(sum1 <= sum2){
                i++;
                sum1 = sum1+arr[i];
            }

            else if(sum2 < sum1){
                j--;
                sum2 = sum2+arr[j];
            }
        }
        }
       

        if(!flag) cout<< "-1"<<endl;
    }
return 0;
}