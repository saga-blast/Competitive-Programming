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
        set<ll> s;
        for(ll i=1;i<=n;i++){
            s.insert(i);
        }
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll p;
            cin>>p;
            if(s.find(p)!=s.end())
                s.erase(p);
            else
                v.push_back(p);
        }

        sort(v.begin(),v.end());
       
        bool check=false;
        for(auto nx : v){
            auto it=s.begin();
            int c=(*it);
            if(c>(nx-1)/2){
                check=true;
                break;
            }
            s.erase(it);
        }
        (check)?cout<<"-1":cout<<v.size();
            
        cout<<endl;

    }
    return 0;
}
