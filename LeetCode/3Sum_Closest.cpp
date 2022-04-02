class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0;
        int diff = INT_MAX;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n - 2; i++) {
            int l = i+1, r = n-1;
            while(l < r) {
                int s = nums[i] + nums[l] + nums[r];
                if(s == target)
                    return target;
                
                if(abs(target - s) < diff) {
                    diff = abs(target - s);
                    ans = s;
                }
                
                if(s < target) {
                    while(l < r && nums[l] == nums[l+1])
                        l++;
                    l++;
                } else {
                    while(l < r && nums[r] == nums[r-1])
                        r--;
                    r--;
                }
            }
            while(i < n-2 && nums[i+1] == nums[i])
                i++;
        }
        
        return ans;
    }
};