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

    while(n--){
        ll a,b;
        cin>>a>>b;

        if(min(a,b)*2 < max(a,b)){
            cout<<"NO"<<endl;
            continue;
        }

        ll temp = max(a,b)-min(a,b);
        
        ((a+b)%3==0)?cout<<"YES":cout<<"NO";

        cout<<endl;
    }

    return 0;
}