class NumArray {
public:
    vector<int> sums;
    NumArray(vector<int>& nums) {
        sums.resize(nums.size());
        sums[0] = nums[0];
        for(int i=1; i < nums.size(); i++){
            sums[i] = nums[i]+sums[i-1];
        } 
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return sums[right];
        else return sums[right] - sums[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */