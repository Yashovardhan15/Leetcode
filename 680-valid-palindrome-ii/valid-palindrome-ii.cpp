class Solution {
private: 
    bool isPalindrome(string &s, int i, int j){
        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else return false;
        }return true;
    }    
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(s[i] != s[j]){
                if(isPalindrome(s, i, j-1) || isPalindrome(s, i+1, j)){
                    return true;
                }else return false;
            }else{
                i++;
                j--;
            }
        }
        return true;

    }
};