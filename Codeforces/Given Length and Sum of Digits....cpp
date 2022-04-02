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
    ll n,k;
    cin>>n>>k;
    ll x=k;
    string s,s1;
    if(n==1 && k<10){
        cout<<k<<" "<<k;
        return 0;
    }
    if((n>1 && k==0)||(n==1 && k>9)){
        cout<<"-1 -1";
        return 0;
    }
    for(ll i=0;i<n;i++)
    {
        if(x>8){
            s=s+"9";
            x-=9;
        }
        else{
            s=s+char(x+48);
            x=0;
        }
    }
    if(x!=0){
        cout<<"-1 -1";
        return 0;
    }
    s1=s;
    reverse(s1.begin(),s1.end());
    if(s1[0]=='0'){
        for(ll i=0;i<s1.length();i++){
            if(s1[i]!='0'){
                s1[i]=char(int(s1[i])-1);
                s1[0]='1';
                break;
            }
        }
    }
    cout<<s1<<" "<<s;
    
    return 0;
}
