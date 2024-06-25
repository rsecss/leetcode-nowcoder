/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
bool isPalindrome(int x) {
   if(x<0 || (x % 10 == 0 && x != 0))
   {
    return false;
   }

   long int original = x;
   long int reversed = 0;

    while(x>0)
    { 
        reversed = reversed*10 + x%10;
        x /= 10;
    }

    return original==reversed || original==reversed/10;
}
// @lc code=end

