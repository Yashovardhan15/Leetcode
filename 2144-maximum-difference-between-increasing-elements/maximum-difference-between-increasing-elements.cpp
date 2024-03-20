class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        int min_till_now = nums[0];
        for(int j=1; j<nums.size(); j++){
            if(nums[j] > min_till_now){
                ans = max(ans, nums[j]-min_till_now);
            }
            min_till_now = min(min_till_now, nums[j]);
        }
        return ans;
    }
};

// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//         int res = nums[1]-nums[0];
//         int minval = nums[0];
//         for(int i = 1;i<nums.size();i++){
//             res = max(res,nums[i]-minval);
//             minval = min(nums[i],minval);
//         }
//         return res <= 0 ? -1 : res;
        
//     }
// };