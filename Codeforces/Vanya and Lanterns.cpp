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
    int n,l;
    cin>>n>>l;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int d= 2*max(v[0],l-v[n-1]);
    //cout<<d<<" ";
    for(int i=0;i<n-1;i++){
        d= max(d,v[i+1]-v[i]);
        //cout<<endl<<d<<" ";
    }
    printf("%.10f",d/2.0);
    
    return 0;
}