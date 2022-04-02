#include <bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define nl "\n"
ll mod=1000000007;
vector<pair<int,int>> v;
void judge(){
    fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
}
set<string> p;

void permutations(string prefix, string suffix)
{
    if (suffix.length() == 0){
        p.insert(prefix);
        return;
    }
    for (int i = 0; i < suffix.length(); i++){
        permutations(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i + 1));
    }
}

int main(){

    judge();
    string s;
    cin >> s;

    permutations("", s);

    cout<<p.size()<<endl;
    for (auto ele : p){
        cout<<ele<<endl;
    }
    
    return 0;
}