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
ll powers[10];
void precalculate(){
    powers[0] = 1;
    for (int i = 1;i<=9;i++)
        powers[i] = (powers[i - 1] * 10);
}

int main(){

    judge();
    int t;
    cin>>t;
    precalculate();
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<ll> a(n),occ(n);
        for (int i = 0;i<n;i++)
            cin>>a[i];
 
        ll s = 0;
 
        for (int i = 0;i<n;i++){
            if (k < 0)
                break;
            occ[i] = k + 1;
            if (i != n - 1)//if i == n - 1 => a[i + 1] is not defined
                occ[i] = min(occ[i],powers[a[i + 1]]/powers[a[i]] - 1);
            
            k -= occ[i];
            s += occ[i] * powers[a[i]];
        }
        cout<<s<<endl;
    }
    return 0;
}
