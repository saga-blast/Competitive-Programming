class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size(),m=nums2.size(),t=(n+m+1)/2;
        if(n>m)return findMedianSortedArrays(nums2,nums1);
        
        int l=0,r=n;
        while(l<=r){
            int c1=(l+r)/2,c2=t-c1;
            
            int l1=c1-1>=0?nums1[c1-1]:INT_MIN;
            int l2=c2-1>=0?nums2[c2-1]:INT_MIN;
            int r1=c1<n?nums1[c1]:INT_MAX;
            int r2=c2<m?nums2[c2]:INT_MAX;
            
            if(l1<=r2&&l2<=r1){
                if((n+m)&1)
                    return double(max(l1,l2));
                return double(max(l1,l2)+min(r1,r2))/2.0;
            }
            else if(l1>r2){
                r=c1-1;   
            }
            else {
                l=c1+1;
            }
        }
        
        return 0.0;  
    }
};