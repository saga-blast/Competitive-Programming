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
    string s;
    cin>>s;
    int cnt = INT_MIN;
    for(int i=0;i<s.size();i++){
        char c= s[i];
        int temp=1;
        while(s[i+1]==c && (i+1 < s.size())){
            i++;
            temp++;
        }
        if(temp> cnt){
            cnt= temp;
        }
    }
    cout<<cnt;

    return 0;
}