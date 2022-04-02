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

int main(){

    judge();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if (n%2==0) 
            cout<<2<<" "<<n-3<<" "<<1<<endl;
	    else {
		    ll temp=(n-1)/2;
		    if (temp%2==0) 
                cout<<temp-1<<" "<<temp+1<<" "<<1<<endl;
		    else 
                cout<<temp-2<<" "<<temp+2<<" "<<1<<endl;
	    }
    }
    return 0;
}
