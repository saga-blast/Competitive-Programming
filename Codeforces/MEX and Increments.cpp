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
        int n;
        cin>>n;
        vector<int> a(n); 
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> c(n+1);
        for (int i=0;i<n;i++){
            c[a[i]]++;
        }
        sort(a.begin(),a.end());
        stack<int> s;
        vector<ll> ans(n+1,-1);
        ll sum = 0;
        for(int i=0;i<=n;i++){
            if(i>0 && c[i-1]==0){
                if(s.empty()){
                    break;
                }
                int j = s.top();
                s.pop();
                sum += i-j-1;
            }
            ans[i] = sum + c[i];
            while (i > 0 && c[i-1] > 1) {
                c[i-1]--;
                s.push(i-1);
            }
        }
        for (auto x : ans) {
            cout<<x<<' ';
        }
        cout<<endl;
    }
    return 0;
}
