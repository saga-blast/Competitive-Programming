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

// class Solution {
// public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
// };
int main(){

    judge();

    int n;
    cin>>n;
    vector<int> y(n), x(2);
    for(int i=0;i<m+n;i++)
        cin>>y[i];
    
    int target;
    cin>>target;
    
    x = twoSum(y,target);
    //cout<<endl;
    for(int i=0;i<2;i++)
        cout<<x[i]<<" ";
    return 0;
}