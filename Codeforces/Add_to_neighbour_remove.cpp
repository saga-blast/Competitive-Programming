#include <bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

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
        ll n;
        cin>>n;

        vector<int> v(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }

        for (int i = n; i >= 1; i--) {
            if (sum % i == 0) {
                ll needSum = sum / i;
                ll curSum = 0;
                bool ok = true;
                for (int j = 0; j < n; j++) {
                curSum += v[j];
                if (curSum > needSum) {
                     ok = false;
                    break;
                }
                else if (curSum == needSum) {
                    curSum = 0;
                }
            }

            if (ok) {
                cout << n - i << endl;
                break;
            }
            }
        }

	} 
	return 0;
}