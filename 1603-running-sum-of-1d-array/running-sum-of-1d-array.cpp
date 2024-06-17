class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0; i<nums.size(); i++){
            ans[i] = i ? ans[i-1] + nums[i] : nums[i]; 
        }
        return ans;
    }
};