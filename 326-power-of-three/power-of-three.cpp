class Solution {
public:
    bool isPowerOfThreehelper(int n){
        if(n<=0) return false;
        if(n == 1) return true;
        if(n%3 != 0) return false;
        return isPowerOfThreehelper(n/3);
    }
    bool isPowerOfThree(int n) {
        return isPowerOfThreehelper(n);
    }
        
};
