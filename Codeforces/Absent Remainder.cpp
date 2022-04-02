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
        int n;
        cin>>n;
        ll sum=0;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        //ll m= *min_element(v.begin(),v.end());
        ll m = v[0];
        for(int i=0,k=0;k<n/2;i++){
            if(v[i] != m){
                cout<<v[i]<<" "<<m<<endl;
                k++;
            }
        }
            
    }
    return 0;
}
  