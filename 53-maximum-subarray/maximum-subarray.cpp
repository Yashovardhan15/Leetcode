class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0, finalans = INT_MIN;
        int n = nums.size();

        for(int i=0; i<n; i++){
            cursum += nums[i];
        
            finalans = max(finalans, cursum);
            if(cursum < 0){
                cursum = 0;
            }
        }
        return finalans;
    }
};