class Solution {

private: 
    int isvowel(char c){
        if(c == 'a') return 1;
        if(c == 'e') return 1;
        if(c == 'i') return 1;
        if(c == 'o') return 1;
        if(c == 'u') return 1;
        return 0;
    }    
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans=0;
        int cur=0;
        for(int i=0; i<k; i++){
            cur += isvowel(s[i]);
        }
        ans = max(ans, cur);
        for(int i=k; i<n; i++){
            cur += isvowel(s[i]);
            cur -= isvowel(s[i-k]);
            ans  = max(ans, cur);
        }
        return ans;
    }
};