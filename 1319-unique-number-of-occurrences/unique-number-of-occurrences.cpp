// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int, int>count;
//         unordered_set<int>st;

//         for(const int a:arr){
//             count[a]++;
//         }
//         for(auto i:count){
//             st.insert(i.second);
//         }
//         if(count.size() == st.size()) return true;
//         return false;

//     }
// };

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        vector<int>ans;
        for(auto i:m)
        {
            ans.push_back(i.second);
            
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]==ans[i+1])return false;
        }
        return true;
    }
};