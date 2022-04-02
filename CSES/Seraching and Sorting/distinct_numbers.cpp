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
    set<int>s;
	while(t--){
        int a;
        cin>>a;
	 s.insert(a);
	} 
    cout<<s.size();
	return 0;
}