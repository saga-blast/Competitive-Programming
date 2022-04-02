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

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(ll j=0;j<n;j++){
            ll a;
            cin>>a;
            v[j].first=a;
            v[j].second = j;
        }
        sort(v.rbegin(),v.rend());
        vector<ll> ans(n);
        ll mid = (n+2)/2, left = mid-1 , right= mid+1 ,result=0;
        bool l = true;
        for(ll i=0;i<n;i++){
            ll ele = v[i].first , index = v[i].second;
            if(l){
                ans[index] = left;
                result+= ele*2*(mid-left);
                left--;
                l=false;
            }
            else{
                ans[index] = right;
                result+= ele*2*(right-mid);
                right++;
                l=true;
            }
        }    
        cout<<result<<endl;
        cout<<mid<<" ";
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;

    }
    return 0;
}
