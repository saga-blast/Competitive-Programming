#include<bits/stdc++.h>
#include<map>
#include<vector>

// class Solution {
// public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto x :nums)
            m[x]++;
        
        for(auto x:m){
            if(x.second >1)
                return true;
        }
        
        return false;
        
    }
// };
int main(){

    vector<int> v;
    cout<<containsDuplicate(v);
    return 0;
}