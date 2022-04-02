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
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
ll findGCD(vector<ll> arr, int n)
{
    ll result = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
 

int main(){

    judge();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v,v1,v2;
        for(int i=0;i<n;i++){
            ll t;
            cin>>t;
            v.push_back(t);
            if(i%2==0)
                v1.push_back(t);
            else 
                v2.push_back(t);
        }
        // map<int,int>m;
        // for(int i=0;i<v1.size();i++){
        //     m[v1[i]]++;
        // }
        // for(int i=0;i<v2.size();i++){
        //     if(m[v2[i]]>1){

        //     }
        // }
        // for(int i=0;i<v1.size();i++){
        //     cout<<v1[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        bool check=false;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                cout<<0<<endl;
                check=true;
                break;
            }
        }

        if(check==false){
            ll ans1= findGCD(v1,v1.size());
            ll ans2=findGCD(v2,v2.size());

        //cout<<ans1<<" "<<ans2<<endl;
        if(ans1==ans2 ){
            cout<<0<<endl;
        }
        else {
            ll temp= ans1;
            bool ans = true;
            for(int i=0;i<n-1;i++){
                if(v[i]%temp==0 && v[i+1]%temp==0){
                    ans=false;
                    break;
                }
            }
            //cout<<"ans "<<ans<<endl;
            temp= ans2;
            bool an = true;
            for(int i=0;i<n-1;i++){
                if(v[i]%temp==0 && v[i+1]%temp==0){
                    an=false;
                    break;
                }
            }  
            if(ans)
                cout<<ans1<<endl;
            else if(an)
                 cout<<ans2<<endl;
            else 
                 cout<<0<<endl;
            
        }
        }
       
    }
    return 0;
}
  