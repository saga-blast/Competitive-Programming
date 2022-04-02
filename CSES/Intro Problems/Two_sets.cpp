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

    ll sum = (n*(n+1))/2;

    vector<ll> a,b;
    if(sum%2!=0){
        cout<<"NO";
    }
    else{
        ll check=sum/2;

        for(int i=n;i>=1;i--){
            if(i<=check){
                a.push_back(i);
                check-=i;
            }
            else{
                b.push_back(i);
            }
        }

        cout<<"YES"<<endl<<a.size()<<endl;
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<endl<<b.size()<<endl;
        for(auto x:b){
            cout<<x<<" ";
        }

    }

    return 0;
}