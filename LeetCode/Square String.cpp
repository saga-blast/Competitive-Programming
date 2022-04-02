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
        string s;
        cin>>s;
        ll n = s.length();
        //cout<<n<<endl;

        if(n%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            bool c=true;
            for(ll i=0;i<n/2;i++){
                if(s[i]!=s[n/2 + i]){
                    cout<<"NO"<<endl;
                    c=false;
                    break;
                }
            }
            if(c){
                cout<<"YES"<<endl;
            }
        }

        
        
    }
    return 0;
}
  