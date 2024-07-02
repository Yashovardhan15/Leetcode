class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        vector<int>left(n);
        vector<int>right(n);

        int sum=0;
        for(int i = n-1; i>=0; i--){
            sum += nums[i];
            right[i] = sum;
        }
        sum=0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            left[i] = sum;
        }
        for(int i=0; i<n; i++){
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
    }
};