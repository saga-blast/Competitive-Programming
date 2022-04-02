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
    if(n==1)
        cout<<n;
    else{
    while(n!=1){
        cout<<n<<" ";
        (n%2==0)?n/=2:n = n*3 +1 ;
        if(n==1){
            cout<<n;
        }
    }
    }

    return 0;
}