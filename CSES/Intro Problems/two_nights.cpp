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

    ll n;
    cin>>n;

    for (ll i=1;i<=n;i++){
        cout<<(((i*i)*((i*i)-1))-8-24 - (16*(i-4)) -16 - ((i-4)*6*4) - ((i-4)*(i-4)*8))/2 <<endl;
    }

    return 0;
}