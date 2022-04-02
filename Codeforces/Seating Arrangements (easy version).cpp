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
        ll n,m,c=0;
        cin>>n>>m;
        ll arr[n*m];
    
        for (int i=0;i<n*m;i++)
            cin>>arr[i];
    
        for(int i=1;i<n*m;i++){
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i])
                    c++;
            }
        }
        
        cout<<c<<"\n";
            
    }
    return 0;
}
  