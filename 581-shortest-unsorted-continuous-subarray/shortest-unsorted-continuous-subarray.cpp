class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(),sorted_nums.end());
        int st = -1, end = -2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != sorted_nums[i])
            {
                if(st == -1) st = i;
                else end = i;
            } 
        }
        return end - st + 1;
    }
};