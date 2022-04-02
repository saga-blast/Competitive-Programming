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
ll gcd(ll a,ll b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){

    judge();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<=6){
            cout<<15<<endl;
            continue;
        }
        if(n%6==0)
            cout<<15*(n/6);
        else if(n%6<=2)
            cout<<15*(n/6) + 5;
        else if(n%6<=4)
            cout<<15*(n/6) +10;
        else
            cout<<15*(n/6 +1);
        
        cout<<endl;
    }
    return 0;
}
