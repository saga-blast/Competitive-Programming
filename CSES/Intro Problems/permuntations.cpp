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
    ll n;
    cin>>n;
    vector<int> v(n);
    int end,start=0;
    if(n>1 && n<4){
        cout<<"NO SOLUTION";
    }
    else if(n==4){
        cout<<"2 4 1 3";
    }
    else{
    if(n%2!=0){
        end = n/2 +1;
    }
    else    
        end = n/2;
    //cout<<floor((float)(n/2))<<endl;
    for(int i=1;i<=n;i++){
        //cout<<i<<endl;
        if(i%2!=0){
            v[start]=i;
            start++;
            //cout<<"ODD"<<endl;
        }
        else{
            v[end] = i;
            end++;
            //cout<<"even"<<endl;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    }
    return 0;
}