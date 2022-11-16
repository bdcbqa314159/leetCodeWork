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
        int l = 1;
        int r = n;
        int myGuess{l+(r-l)/2};
        
        while (l<=r){
            
            if (guess(myGuess) == 0)
                break;
            else if(guess(myGuess) == -1)
                r = myGuess-1;
            else
                l = myGuess+1;
            myGuess = l+(r-l)/2;
        }
        return myGuess;
    }
};