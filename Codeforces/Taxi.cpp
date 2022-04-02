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

 
// Driver program to test above function
int main()
{
    judge();
    int n;
    cin>>n;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        m[t]++;
    }
    int ans=0;
    ans+=m[4];

    if(m[3]>=m[1]){
        ans+=m[3];
        m[1]=0;
    }
    else{
        ans+=m[3];
        m[1]=m[1]-m[3];
    }
    ans+=m[2]/2;
    if(m[2]%2!=0){
        ans++;
        m[1]-=2;
    }
    if(m[1]>0){ 
        ans+=m[1]/4;
        if(m[1]%4!=0 ){
            ans++;
    }
    }
    cout<<ans<<endl;
    return 0;
}