// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=0; i<=n; ++i){
//             bool found = false;
//             for(int num:nums){
//                 if(num == i){
//                     found = true;
//                     break;
//                 }
//             }
//         if(!found)
//             return i;  
//         }
//         return -1;
        
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int maxi;
        int sum2=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            sum2=sum2+nums[i];
        }
        int sum= n*(n+1)/2;
        return sum-sum2;
    }
};