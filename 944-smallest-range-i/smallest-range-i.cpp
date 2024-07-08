class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxele = INT_MIN;
        int minele = INT_MAX;
        int n = nums.size();
        for(int i=0; i<n; i++){
            maxele = max(maxele, nums[i]);
            minele = min(minele, nums[i]);
        }
        if(maxele - minele <= 2*k){
            return 0;
        }else{
            return (maxele-minele-2*k);
        }
    }
};