class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j = n-1;
        vector<int> ans(n);
        int ansptr = n-1;
        while(i<=j){
            int x = nums[i]*nums[i];
            int y = nums[j]*nums[j];
            if(x>y){
                ans[ansptr--] = x;
                i++;
            }else{
                ans[ansptr--] = y;
                j--;
            }

        }
        return ans;
    }
};