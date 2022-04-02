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
    int t;
    cin>>t;
    while(t--){
        string s, t;
        cin >> s >> t;
        sort(s.begin(),s.end());
        vector<int> cnt(26, 0);
        for(auto x: s)cnt[x - 'a']++;
        if(t != "abc" || !cnt[0] || !cnt[1] || !cnt[2])cout << s << "\n";
        else{
            while(cnt[0]--)cout<<"a";
            while(cnt[2]--)cout<<"c";
            while(cnt[1]--)cout<<"b";
            for(int i = 3;i < 26; ++i){
                while(cnt[i]--)cout<<char('a' + i);
            }
            cout << "\n";
        }
    }
    return 0;
}
