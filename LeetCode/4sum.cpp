
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> p;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long int temp=nums[i]+nums[j];
                int low=j+1;
                int high= nums.size()-1;
                while(low<high){
                    long int t= nums[low]+ nums[high];
                    long int check = temp+t;
                    if(check == target){
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[low]);
                        v.push_back(nums[high]);
                        p.insert(v);
                    }
                    if(check >target){
                        high--;
                    }
                    else{
                        low++;
                    }
                }
            }
        }
        for(auto x:p){
            ans.push_back(x);
        }
        return ans;
        
        
    }
};