class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int res=0;
        for(int i : nums){
            res += m[i];
            m[i]++;
        }
        return res;
    }
};