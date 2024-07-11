class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans;
        long long mx=0;
        for(int i=0; i<nums.size(); i++){
            mx = max(mx, nums[i]+0LL);
            ans.push_back(mx+nums[i]);
        }
        for(int i=1; i<ans.size(); i++){
            ans[i] += ans[i-1];
        }
        return ans;
    }
};