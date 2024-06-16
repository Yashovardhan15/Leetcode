class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int maxsum = INT_MIN;
        int cursum=0;
        for(int i=0; i<k; i++){
            cursum += nums[i];
        }
        maxsum = max(maxsum, cursum);
        for(int i=k; i<n; i++){
            cursum += nums[i];
            cursum -= nums[i-k];
            maxsum = max(maxsum, cursum);
        }
        double ans = (1.0)*maxsum/k;
        return ans;
    }
};