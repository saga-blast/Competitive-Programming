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
        // int n;
        // cin>>n;
        // ll sum=0;
        // vector<ll> v(n);
        // for(int i=0;i<n;i++){
        //     cin>>v[i];
        // }
        int a,b,c,m;
        cin>>a>>b>>c>>m;
        ll p = max(a,max(b,c));
        if((2*p-1-a-b-c) <=m && m<= (a+b+c-3))
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
            
    }
    return 0;
}
  