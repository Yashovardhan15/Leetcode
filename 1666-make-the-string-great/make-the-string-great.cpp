class Solution {
public:
    string makeGood(string s) {
        int n = s.length();
        bool flag = true;
        while(flag){
            int j = 0;
            n = s.length();
            flag = false;
            for(int i=0; i<n; i++){
                if(i+1 < n && abs(s[i]-s[i+1]) == 32){
                    flag = true;
                    i++;
                }else{
                    s[j] = s[i];
                    j++;
                }
            }
            s = s.substr(0,j);
        }
        return s;
    }
};