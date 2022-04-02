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
        ll a , s;
        cin>>a>>s;
        vector<ll> v_a,v_s;
        if(s-a )

        while(a>0){
            v_a.push_back(a%10);
            a/=10;
        }
        while(s>0){
            v_s.push_back(s%10);
            s/=10;
        }
        
        vector<ll>ans;
        bool check=true;
        for(ll i=0,j=0;i<v_s.size() && j<v_a.size();){
            ll temp_s=0,temp_a=0;
            if(v_s[i]<v_a[j]){
                if(v_s[i+1]==0 || i+1==v_s.size() ){
                    check=false;
                    //cout<<"1"<<endl;
                    break;
                }
                temp_s = 10* v_s[i+1] + v_s[i];
                temp_a = v_a[j];
                if(temp_s-temp_a > 9){
                    check=false;
                    break;
                }
                ans.push_back(temp_s-temp_a);
                i+=2;
                j++;
            }
            else{
                ans.push_back(v_s[i]-v_a[j]);
                i++;
                j++;
            }
            if(i<v_s.size() && j>=v_a.size()){
                v_a.push_back(0);
                //cout<<v_a.size()<<endl;
            }

            if(i==v_s.size() && j<v_a.size()) {
            // if(i==v_s.size() || j==v_a.size()){
                //cout<<"i : "<<i<<" v_s size : "<<v_s.size()<<" v_a size : "<<v_a.size()<<" j : "<<j<<endl;
                // cout<<"1"<<endl;
                check = false;
                break;
            }
        }
        if(check){
            ll res=0,j=1;
            bool flag=true;
            // for(auto x: ans)
            //     cout<<x<<" ";
            // cout<<endl;
            for(ll i=0;i<ans.size();i++){
                // if(ans[i]==0 && flag){
                //     continue;
                // }
                // else if(ans[i]!=0 && flag){
                //     flag=false;
                // }
                // if(!flag){
                    res += ans[i]*j;
                    j*=10; 
                // }
            }
            cout<<res<<endl;
            //cout<<"YES"<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
        
    }
    return 0;
}
  