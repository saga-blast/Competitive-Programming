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

class Solution{
    public:
    int knapSack(int w , int wt[],int val[],int n){
        int dp[n+1][w+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=w;j++){
                if(i==0|| j==0){
                    dp[i][j]=0;
                }
                else if(wt[i-1]<=j){
                    dp[i][j] = max(val[i-1]+ dp[i-1][j-wt[i-1]] , dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][w];
    }
};



int main(){

    judge();

    int n,w;
    cin>>n>>w;
    int val[n], wt[n];
    
    for(int i=0;i<n;i++)
        cin>>val[i];

    for(int i=0;i<n;i++)
        cin>>wt[i];
    
    Solution ob;
    cout<<ob.knapSack(w,wt,val,n)<<endl;
    return 0;
}