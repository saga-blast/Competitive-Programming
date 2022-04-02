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
        int n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
           
       
        sort(v.begin(),v.end(),greater<ll>());
        // for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        ll temp=0;
        for (int i = 0; i < k; i++){
            temp+=(v[i+k]/v[i]);   
        }

        for (int i = k*2; i < n; i++){
            temp+=v[i];
        }

        cout<<temp<<endl;
       
    }
    return 0;
}
  