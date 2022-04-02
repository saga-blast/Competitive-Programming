#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
// class Solution {
// public:
int maxSubArray(vector<int>& nums) {
        int sum=0,max_sum=INT_MIN,mi=0;
        bool t=true;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]<0 ){
                if(t){
                    mi=nums[i];t=false;
                }
                else if(nums[i]>mi)
                    mi = nums[i];
            }
            if(sum<0){
                sum=0;
            }
            else if(sum>max_sum){
                max_sum=sum;
            }
        }
        if(max_sum != INT_MIN)
            return max_sum;
        else 
            return mi;
    }

int kadane_approach(vector<int> &nums){
    if(nums.size()==0){
        return 0;
    }

    int sum= nums[0];
    int max_sum= nums[0];

    for (auto i : nums){
        sum = max(sum+i , i);
        max_sum = max(sum , max_sum);
    }
    return max_sum;
}
// };
int main(){

    vector<int> v;
    int p;
    for(cin>>p){
        v.push_back(p);
    }
    cout<<containsDuplicate(v);

    cout<<endl;

    cout<<kadane_approach(v);
    return 0;
}


################################################################################
                  DIVIDE AND CONQUER
################################################################################

int maxSubarrayMiddleSum(int a[],int l , int m , int h){
    int sum=0;
    int left_sum=INT_MIN;
    for(int i=m;i>=l;i--){
        sum += a[i];
        if(sum>left_sum){
            left_sum = sum;
        }
    }
    sum=0;
    int right_sum=INT_MIN;
    for(int i=m;i>=l;i--){
        sum += a[i];
        if(sum>right_sum){
            right_sum = sum;
        }
    }

    return max((left_sum + right_sum) , left_sum , right_sum);

}


int maxSubarraySum(int a[],int l , int h){
    if(l==h){
        return a[l];
    }
    int m  = (l+h)/2;

    return max(maxSubArraySum(a,l,m) , maxSubArraySum(a,m+1,h) , maxSubArrayMiddleSum(a,l,m,h));
}