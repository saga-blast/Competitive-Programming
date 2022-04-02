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
       int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> a(n);
    for (int j = 0; j < n; j++){
      cin >> a[j];
    }
    vector<int> b;
    for (int j = 0; j < n; j++){
      if (l <= a[j] && a[j] <= r){
        b.push_back(a[j]);
      }
    }
    int cnt = b.size();
    sort(b.begin(), b.end());
    int ans = 0;
    for (int j = 0; j < cnt; j++){
      if (k >= b[j]){
        k -= b[j];
        ans++;
      }
    }
    cout << ans << endl;

    }
    return 0;
}
  