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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int all = m + n - 1;
        
        m = m - 1;
        n = n - 1;
        while(all >= 0){
            if(m>=0 && n>=0 && nums1[m] > nums2[n])
                nums1[all--] = nums1[m--];
            else if(m>=0 && n>=0 && nums1[m] <= nums2[n])
                nums1[all--] = nums2[n--];
            
            while(m<0 && n>=0) nums1[all--] = nums2[n--];
            while(m>=0 && n<0) nums1[all--] = nums1[m--];         
        }
        
        return;
    }
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> v(n+m);
//         // for(int i=0;i<m+n;i++)
//         //     cout<<nums1[i]<<" ";

//         // cout<<endl;
//         int k=0;
//         for(int i=0,j=0;(i+j)<=(m+n-1) ;k++ ){
//             if(nums1[i]<nums2[j] && i<m){
//                 v[k]= nums1[i];
//                // cout<<"1 "<<nums1[i]<<endl;               
//                 i++;
//             }
//             else if(nums1[i]>=nums2[j] && j<n) {
//                 v[k]= nums2[j];
//                 //cout<<"2 "<<nums2[j]<<endl;
//                 j++;
//             }
//             else if(i==m ){
//                 v[k]= nums2[j];
//                 //cout<<"2 "<<nums2[j]<<endl;
//                 j++;
//             }
//             else if(j==n){
//                 v[k]= nums1[i];
//                 //cout<<"1 "<<nums1[i]<<endl;
//                 i++;
//             }
//         }
//         // for(int i=0;i<m+n;i++)
//         //     cout<<v[i]<<" ";

//         for(int i=0;i<n+m;i++){
//             nums1[i]=v[i];
//         }
        
//     }
// };
int main(){

    judge();

    int n,m;
    cin>>m>>n;
    vector<int> x(m+n , 0),y(n);
    for(int i=0;i<m+n;i++)
        cin>>x[i];

    for(int i=0;i<n;i++)
        cin>>y[i];
    
    merge(x,m,y,n);
    //cout<<endl;
    for(int i=0;i<m+n;i++)
        cout<<x[i]<<" ";
    return 0;
}