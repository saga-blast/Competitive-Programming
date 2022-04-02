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
        vector<string> v(n);
        string s="";
        for(int i=0;i<n-2;i++)
            cin>>v[i];

        if(n==3){
            s+=v[0];
            s+='a';
            cout<<s<<endl;
            continue;
        }
        s+=v[0][0];
        bool y=true;
        for(int i=0;i<n-3;i++){
            if(v[i][1]!=v[i+1][0]){
                 s+=v[i][1];
                s+=v[i+1][0];
                y=false;
            }
            else{
                 s+=v[i][1];
            }
        }
        s+=v[n-3][1];
        if(y){
            s+=v[n-3][1];
        }
        cout<<s<<endl;
       
    }
    return 0;
}
  