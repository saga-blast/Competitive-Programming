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
        ll n;;
        cin>>n;
        string s;
        cin>>s;

        if(is_sorted(s.begin(),s.end())){
            cout<<0<<endl;
        }
        else{
            string h=s;
            cout<<1<<endl;
            vector<int> v;
            sort(h.begin(),h.end());
            for(int i=0;i<n;i++){
                if(s[i]!=h[i]){
                    v.push_back(i+1);
                }
            }
            cout << v.size() << " ";
            for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

            cout<<endl;
        }

    }
    return 0;
}
  