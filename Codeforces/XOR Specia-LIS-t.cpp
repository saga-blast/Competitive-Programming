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
        ll n;;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];

        if(n%2==0){
            cout<<"YES";
        }
        else{
        bool check=false;
        for(int i=1;i<n;i++){
            if(v[i]<=v[i-1])
                check=true;
        }
        (check)?cout<<"YES":cout<<"NO";
        
        }
        cout<<endl;

    }
    return 0;
}
  