// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
// #define ll long long int
// #define nl "\n"
// ll mod=1000000007;

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector <int> ve;
#define int ll
#define pb push_back
#define in(a) ll a;cin>>a
#define cs set <ll>
#define cm multiset <ll>
#define lp(i,n) for(i=0;i<n;i++)
 
void judge(){
    //fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
}

void solve();
signed main(){
     ios_base::sync_with_stdio(0),cin.tie(0);
     judge();
     in(t);
     while(t--){
          solve();
          cout<<endl; 
       }
     return 0;
}

void solve()
{
    ll n;
    cin>>n;
    ll i,j,ct[5][5],k,tmp;
    lp(i,5) lp(j,5) ct[i][j]=0;

    lp(i,n) 
    {
        ll arr[5];
        lp(j,5){
        cin>>arr[j];
        }
        lp(k,5) lp(j,5){
            if(j<k) continue;
            if(arr[k]==1 && arr[j]==1) ct[k][j]++;
        }
    }
    ll e =n/2;
    lp(i,5){
        lp(j,5){
            if(j<=i) 
                continue;
            ll c = ct[i][j];
            ll a = ct[i][i]-c;
            ll b = ct[j][j]-c;

            for(ll o=0;o<=c;o++){
                if(a+o==e && b+c-o==e){
                    cout<<"YES";
                    return; 
                }
            }
        }
    }
    cout<<"NO";



}