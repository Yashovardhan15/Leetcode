// class Solution {
// public:
//     vector<int> merge2sortedarrays(vector<int> &left, vector<int> &right){
//         vector<int> ans;
//         int i=0, j=0;
//         int m = left.size();
//         int n = right.size();
//         while(i<m && j<n){
//             if(left[i] < right[j]){
//                 ans.push_back(left[i]);
//                 i++;
//             }
//             else{
//                 ans.push_back(right[j]);
//                 j++;
//             }
//         }
//         while(i<m){
//             ans.push_back(left[i]);
//             i++;
//         }
//         while(j<n){
//             ans.push_back(right[j]);
//             j++;
//         }
//         return ans;
//     }

// public:
//     vector<int> sortArray(vector<int>& nums){
//         int n = nums.size();
//         if(n == 1) return nums;
//         vector<int> left(nums.begin(), nums.begin() + n/2);
//         vector<int> right(nums.begin() + n/2, nums.end());

//         left = sortArray(left);
//         right = sortArray(right);

//         return merge2sortedarrays(left, right);
//     }
// };

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};