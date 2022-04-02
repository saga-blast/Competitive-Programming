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

    int n = s.size();
    map<char,int> m;

    for(int i=0;i<n;i++){
        m[s[i]]++;
    }

    int c_odd=0;
    char c = '+';
    for(auto i : m){
        if(i.second % 2 !=0){
            c_odd++;
            c=i.first;
        }

        if(c_odd>1){
            cout<<"NO SOLUTION";
            return 0;
        }
    }
    vector<char> v;
    for(auto i: m){
        int t = i.second/2;
        while(t--)
            v.push_back(i.first);
    }
    //vector<int>::iterator it;
    for(auto it=v.begin();it!= v.end() ;it++){
        cout<<*it;
    }
    if(c!='+')
        cout<<c;
    
    for(auto it = v.rbegin();it != v.rend() ; it++ ){
        cout<<*it;
    }

    return 0;
}