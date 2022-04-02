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
    vector<pair<int,int>> even,odd;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t%2==0){
            even.push_back(make_pair(t,i));
        }
        else    
            odd.push_back(make_pair(t,i));
    }
    if(even.size()==1)
        cout<<even[0].second+1;
    else
        cout<<odd[0].second+1;
    
    return 0;
}