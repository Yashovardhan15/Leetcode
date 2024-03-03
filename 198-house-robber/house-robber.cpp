class Solution {
public:
    int rob(vector<int>& nums) {
        int pr1=0,pr2=0;
        for(int i=0; i<nums.size(); i++){
            int cur = max(pr1, pr2+nums[i]);
            pr2=pr1;
            pr1=cur;
        }
        return pr1;
    }
};