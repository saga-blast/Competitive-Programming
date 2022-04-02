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
    map<int,int> m;

    for(ll i=0;i<n-1;i++){
        int a;
        cin>>a;
        m[a]++;
    }

    for(ll i=1;i<=n;i++){
        if(m[i] == 0){
            cout<<i;
            break;
        }
    }

    return 0;
}