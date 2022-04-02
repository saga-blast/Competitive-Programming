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

int main()
{
    judge();
    int n;
    cin>>n;
    unordered_map<string,int> m;
    vector<string> v(n),ans;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
        if(m[v[i]] >1){
            string s = v[i];
            string cons= to_string(m[v[i]]-1);
            ans.push_back(s+cons);
        }
        else{
            string s= "OK";
            ans.push_back(s);
        }
    }
    for(auto x:ans)
        cout<<x<<endl;
    
    return 0;
}