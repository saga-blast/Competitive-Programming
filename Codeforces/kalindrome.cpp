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
bool check_palindrome(vector<ll> a,ll x){
    ll  k = a.size() , i=0,j=k-1;
    while(i<j){
        if(a[i]==x)
            i++;
        else if(a[j]==x)
            j--;
        else if(a[i] != a[j])
            return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){

    judge();

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        bool check=true;
        for(int i=0;i<n-1-i;i++){
            if(a[i]!=a[n-1-i]){
                check = check_palindrome(a,a[i]) || check_palindrome(a,a[n-1-i]);
                break;
            }
        }
        (check)?cout<<"YES":cout<<"NO";
        cout<<endl;

    }
    return 0;
}
