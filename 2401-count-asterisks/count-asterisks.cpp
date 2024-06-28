class Solution {
public:
    int countAsterisks(string s) {
        int ans=0;
        bool flag = false;
        for(char ch : s){
            if(ch == '*' && !flag) ans++;
            else if(ch == '|' ) flag = !flag;
        }
        return ans;
    }
};