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
        int s=1; // starting value
        int e=n; // ending value 
        
        while(s<=e){ // start binary search 
            int m=s+(e-s)/2; // ifind mid 
            // int mid=guess(m);
            if(guess(m)==1){ // check in guess api function 
                s=m+1;
            }
            else if(guess(m)==-1){
                e=m-1;
            }
            else{
                return m;
            }
        }
        return -1;
    }
};
