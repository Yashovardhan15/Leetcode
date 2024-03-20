class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, ans=0, zero_count=0;
        int n = nums.size();
        for(int r=0; r<n; r++){
            if(nums[r] == 0) zero_count++;
            while(zero_count > k){
                if(nums[l] == 0)
                    zero_count--;
                    l++;
            }
            ans = max(ans, r-l+1);
        } 
        return ans;
    }
};