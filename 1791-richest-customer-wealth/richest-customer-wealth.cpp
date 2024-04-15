class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth;
        int ans=0;
        for(int i=0; i<accounts.size(); i++){
            wealth=0;
            for(int j=0; j<accounts[0].size(); j++){
                wealth += accounts[i][j];
            }
            ans = max(ans, wealth);
        }
        return ans;
    }
};

// class Solution {
// public:
//     int maximumWealth(vector<vector<int>>& accounts) {
//         int wealth=0, temp_wealth=0;
//         for(int i=0;i<accounts.size();i++)
//         {
//             temp_wealth=0;
//             for(int j=0;j<accounts[0].size();j++)
//             {
//                 temp_wealth+=accounts[i][j];
//             }
//             wealth=max(wealth, temp_wealth);
//         }
//         return wealth;
//     }
// };