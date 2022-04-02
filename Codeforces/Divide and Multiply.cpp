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
       vector<int> v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }

       ll ans=0;
       int count_even=0,count_multiple=0;
       for(int i=0;i<n;i++){
            if(v[i]&1){
                //cout<<v[i]<<endl;
                ans+= (ll)v[i];
            }
            else{
                count_even++;
                while(v[i]%2==0){
                    count_multiple++;
                    v[i]/=2;
                }
                ans+= (ll)v[i];
            }
       }
       sort(v.begin(),v.end());
       ans+= v[n-1]*pow(2,count_multiple) - v[n-1];

       cout<<ans<<endl;
    }
    return 0;
}
  