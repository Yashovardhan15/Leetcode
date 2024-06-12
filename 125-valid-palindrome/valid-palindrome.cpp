class Solution {
private:
    bool isalphanumeric(char c){
        if(c>='0' && c<='9') return true;
        if(c>='a' && c<='z') return true;
        if(c>='A' && c<='Z') return true;
        return false;
    }


public:
    bool isPalindrome(string s) {
        string valstr;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(isalphanumeric(s[i])){
                if(isupper(s[i])) s[i] = tolower(s[i]);
                valstr.push_back(s[i]);
            }
        }
        string revstr = valstr;
        reverse(revstr.begin(), revstr.end());
        return (revstr == valstr);  
    }
};