// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int temp;
//         // for(int i=0;i<m;i++){
//         //     if(matrix[i][n-1] > target){
//         //         temp = i;
//         //         break;
//         //     }
//         //     else if(matrix[i][n-1] == target)
//         //         return true;
//         // }
//         // for(int i=0;i<n;i++){
//         //     if(matrix[temp][i] == target)
//         //         return true;
//         // }
//         // return false;
//         int i=0,j=m-1;
//         while(i<=j){
//             int mid=  (i+j)/2;
//             if(matrix[mid][n-1] == target)
//                 return true;
//             else if(matrix[mid][n-1] < target && matrix[mid+1][n-1] >= target){
//                 int k=0,l=n-1;
//                 while(k<=l){
//                     int mid1= (k+l)/2;
//                     if(matrix[mid][mid1]==target)
//                         return true;
//                     else if(matrix[mid][mid1] < target)
//                         k=mid+1;
//                     else
//                         l=mid-1;
//                 }
//                 return false;
//             }
//             else if(matrix[mid][n-1] < target)
//                 i=mid+1;
            
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lx = 0, rx = matrix.size();
        int midx = (lx + rx) / 2;
        while (lx < rx) { // Searching vector that may include our target
            if (matrix[midx].back() >= target && matrix[midx][0] <= target) {
                int ly = 0, ry = matrix[midx].size();
                int midy = (ly + ry) / 2;
                while (ly < ry) { // Searching our target
                    if (matrix[midx][midy] == target) return true;
                    if (matrix[midx][midy] < target) {
                        ly = midy + 1;
                    } else {
                        ry = midy;
                    }
                    midy = (ly + ry) / 2;
                }
                return false; // If there is no number equals to target, 
				              // than it can't be anywhere else so returning false
            }
            if (matrix[midx].back() < target) {
                lx = midx + 1;
            } else if (matrix[midx][0] > target) {
                rx = midx;
            }
            midx = (lx + rx) / 2;
        }
        return false;
    }
};