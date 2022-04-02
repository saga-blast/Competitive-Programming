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
        ll n;
        cin>>n;
        //unordered_map<ll,char> m;
        vector<ll>v(n),b,r;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        bool ans=true;
        for(ll i=0;i<n;i++){
            char c;
            cin>>c;
            //m[v[i]]=c;
            // if(v[i]<0 && c!='R')
            //     ans = false;
            // if(v[i]>n && c!='B')
            //     ans = false;

            if(c=='B'){
                b.push_back(v[i]);
            }
            else{
                r.push_back(v[i]);
            }
        }
        sort(b.begin(),b.end());
        sort(r.begin(),r.end(),greater<ll>());

        // for(auto x:b) cout<<x<<" ";
        // cout<<endl;
        // for(auto x: r) cout<<x<<" ";
        // cout<<endl;
        
        for(ll i=0;i<b.size();i++){
            if(b[i]<i+1) 
                ans=false;
        }
        for(ll i=0;i<r.size();i++){
            if(r[i]>n-i)
                ans=false;
        }
        (ans)?cout<<"YES":cout<<"NO";

        cout<<endl;
    }
    return 0;
}
