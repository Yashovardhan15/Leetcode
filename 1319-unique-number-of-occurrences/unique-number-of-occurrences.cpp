class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>count;
        unordered_set<int>st;

        for(const int a:arr){
            count[a]++;
        }
        for(auto i:count){
            st.insert(i.second);
        }
        if(count.size() == st.size()) return true;
        return false;

    }
};