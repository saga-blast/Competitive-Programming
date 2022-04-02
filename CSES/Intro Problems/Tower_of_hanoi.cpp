#include <bits/stdc++.h>
#include<vector>
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

void towerOfHanoi(int n, int from_rod, int to_rod, int aux_rod , int &count)
{
    count++;
    if (n == 1){
        v.push_back( make_pair(from_rod,to_rod));
        return;
    }

    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod,count);
    
    v.push_back( make_pair(from_rod,to_rod));

    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod,count);
}

int main(){
    judge();

    int n;
    cin>>n;
    // cout<<(1<<n)<<endl;
    // cout<<"------"<<endl;

    int count=0;
    towerOfHanoi(n, 1, 3, 2,count);

    cout<<count<<endl;

    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}