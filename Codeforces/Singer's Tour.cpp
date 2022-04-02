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
        vector<ll> v(n),ans(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll c = (n*(n+1))/2;
        if(sum%c){
            cout<<"NO"<<endl;
            continue;
        }
        bool check=true;
        ll x= sum/c;
        for(int i=0;i<n;i++){
            ll temp=v[i]-v[(n-1+i)%n];
            ll dif = x-temp;
            if((dif<=0) || (dif%n)){
                check=false;
                break;
            }
            dif/=n;
            ans[i]=dif;
        }
        if(check){
            cout<<"YES"<<endl;
            for(auto i : ans)
                cout<<i<<" ";
            cout<<endl;
        }  
        else
            cout<<"NO"<<endl;
            
    }
    return 0;
}
  