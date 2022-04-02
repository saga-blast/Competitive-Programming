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
ll check(string s){
    ll k = s.length(),r=0;
    for(ll i=0;i<k;i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
            r++;
            i+=2;
        }
    }
    return r;
}


int main(){

    judge();
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i <= n - 2; i++){
    if (s.substr(i, 3) == "abc"){
      ans++;
    }
  }
  for (int j = 0; j < q; j++){
    int i;
    char c;
    cin >> i >> c;
    i--;
    for (int k = max(i - 2, 0); k <= min(i, n - 2); k++){
      if (s.substr(k, 3) == "abc"){
        ans--;
      }
    }
    s[i] = c;
    for (int k = max(i - 2, 0); k <= min(i, n - 2); k++){
      if (s.substr(k, 3) == "abc"){
        ans++;
      }
    }
    cout << ans << "\n";
  }
}