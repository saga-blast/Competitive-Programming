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
       int n, a, b;cin>>n>>a>>b;
        vector<int>v;
        v.push_back(a);
        int x = n;
        for(int i = 2;i<=n/2;i++){
            while(x==a or x==b)x--;
            v.push_back(x);x--;
        }
        x=1;
        for(int i = n/2 + 1;i<=n;i++){
            while(x==a or x==b)x++;
            v.push_back(x);x++;
        }
        v[n-1] = b;
        int f = 0;
        for(int i = 0;i<n/2;i++){
            if(v[i]<a){
                f=1;break;
            }
        }
        for(int i = n/2;i<n;i++){
            if(v[i]>b){
                f=1;
                break;
            }
        }
        if(f)cout<<-1;
        else for(auto i:v)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
  