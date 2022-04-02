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

        int ans=0;
        //cout<<(int)(sqrt(n))<<" "<<(int)(cbrt(n))<<endl;
        set<int> s;
        for(int i=2;i<=(int)(sqrt(n));i++){
            s.insert(i*i);
        }
        for(int i=2;i<=(int)(cbrt(n));i++){
            s.insert(i*i*i);
        }
        ans+= s.size()+1;
        cout<<ans<<endl;
        
        
    }
    return 0;
}
  