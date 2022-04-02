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
        ll x,y;
        cin>>x>>y;
        ll ans;
        if (x < y){
            if (y % 2 == 1){
                ans = y*y -x+1;
            }
            else{
                ans = (y-1)*(y-1) + x ;
            }
        }
        else{
            if (x % 2 == 0){
                ans = x*x-y+1;
            }
            else
            {
                ll r = (x - 1) * (x - 1) + 1;
                ans = (x-1)*(x-1) + y; 
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}