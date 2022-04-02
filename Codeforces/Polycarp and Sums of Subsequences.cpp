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
       vector<ll> v(7);
       for(int i=0;i<7;i++){
           cin>>v[i];
       }
        ll temp=0,j=0;
        while(temp<v[6]){
            temp+=v[j];
            j++;
        }
        if(temp==v[6]){
            cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
        }
        else{
            cout<<v[0]<<" "<<v[1]<<" "<<v[3]<<endl;
        }
    }
    return 0;
}
  