#include <bits/stdc++.h>
#include<vector>
#include<cmath>
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
ll pre[200005][31];

void store_ith_bit(){
    ll N=2e5 +5;
    for(ll i=1;i<N;i++){
        for(ll j=0;j<=30;j++){
            if(i&(1<<j))           //check if j'th bit of i(no) is set as 1 or not
                pre[i][j]=1;
            pre[i][j]+=pre[i-1][j];    //prefix sum is maintained , that is no of elements with same prefix 
        }
    }
}

int main(){

    judge();
    store_ith_bit();
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;

        ll total = r-l+1;
        ll ans = 1e10;

        for(int i=0;i<30;i++){
            ll temp = pre[r][i] - pre[l-1][i];
            ans = min(ans,total-temp);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
