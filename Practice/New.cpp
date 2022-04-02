#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define LL long long int
#define nl "\n"
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
		int n,r,k,c;
		cin>>n>>r>>k>>continue;
		cout<<recyclePens(n,r,k,c)<<endl;
	}
	return 0;
}


