#include <bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//using namespace std;

// vector<int> v(800001,0);
void judge(){
    //fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
}
using namespace std;
typedef long long ll;
int main() {
    
    judge();
    //fastio;

    int t;
    cin>>t;
	while(t--){
        ll u,v;
        cin>>u>>v;

        ll p = u*v;
        ll l = p/3;
        (p%3 !=0)? cout<<l+1<<endl : cout<<l<<endl;

	} 
	return 0;
}