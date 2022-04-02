#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define nl "\n"
ll mod=1000000007;
void judge(){
    fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){

    judge();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vector<ll> a(n);
        ll cnt_0=0,cnt_1=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
                cnt_0++;
            if(a[i]==1){
                cnt_1++;
            }
        }
        // cout<<(1ll << cnt_0)<<endl;
        // cout<< (ll)cnt_1 <<endl;
        cout<<(1ll << cnt_0)*(ll)cnt_1 <<endl;
        
    }
    return 0;
}
  