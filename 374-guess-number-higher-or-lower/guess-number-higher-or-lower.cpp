/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 0;
        int right = n;

        while(right>=left){
            int m = left + (right-left)/2;
            if(guess(m)<0){
                right = m-1;
            }
            else if(guess(m)>0){
                left = m+1;
            }
            else{
                return m;
            }
        }
        return 1;
    }
};