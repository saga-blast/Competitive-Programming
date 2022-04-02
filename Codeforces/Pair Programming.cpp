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
    int t;
    cin>>t;
    while(t--){
        ll k,n,m;
        cin>>k>>n>>m;
        
        vector<ll> a(n),b(m);
		for (ll i = 0; i < n; i++) {
			cin>>a[i];
		}
        for (ll i = 0; i < m; i++) {
			cin>>b[i];
		}
		ll pos1 = 0, pos2 = 0;
        vector<ll> res;
        bool ok = true;
        while (pos1 != n || pos2 != m) {
            if (pos1 != n && a[pos1] == 0) {
                res.push_back(0);
                k++;
                pos1++;
            } else if (pos2 != m && b[pos2] == 0) {
                res.push_back(0);
                k++;
                pos2++;
            } else if (pos1 != n && a[pos1] <= k) {
                res.push_back(a[pos1++]);
            } else if (pos2 != m && b[pos2] <= k) {
                res.push_back(b[pos2++]);
            } else {
                cout<<-1<<endl;
                ok = false;
                break;
            }
        }

        if (ok) {
            for(ll i:res)
                cout<<i<<" ";

            cout<<endl;
        }
        

    }
    return 0;
}
  