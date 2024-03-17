class Solution {
public:
    string toLowerCase(string s) {
        for(char &i : s){
            if(i >= 'A' && i<= 'Z'){
                i += 32;
            }
        }
        return s;
    }
};