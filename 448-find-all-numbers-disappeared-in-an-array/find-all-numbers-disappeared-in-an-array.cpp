class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
    for(auto n : nums)
        nums[abs(n)-1] = -abs(nums[abs(n)-1]);
    for(int i=0; i<nums.size(); i++)
        if(nums[i] > 0) ans.push_back(i+1);
    return ans;        
    }
};