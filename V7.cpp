/*
*****************************LeetCode Problems ******************************************************************************


7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go
 outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

*************************
Solution:
*************************

class Solution {
public:
    int reverse(int x) {

        int digit = 0;
        int ans = 0;

        while(x!=0)
        {
            digit = x%10;
            if((ans < INT_MIN/10) || (ans > INT_MAX/10))
            {
                return 0;
            }

            ans = (ans *10)+digit;
            
            x = x /10;
        }

        return ans;
        
    }

    ***************************************************************************************************************


     1009. Complement of Base 10 Integer

Hint
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

 

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:

Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:

Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
 

Constraints:

0 <= n < 109

**********************************
Solution:
**********************************

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        //edge case

        if(n == 0)
        {
            return 1;
        }
        while(m != 0)
        {
            mask = (mask << 1) | 1;
            m = m>>1;
        }
        int ans = (~n)& mask;

        return ans;
        
    }
};
*******************************************************************************************************************

231. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1
 

Follow up: Could you solve it without loops/recursion?

****************************************
Solution:
****************************************

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 0;

        for(int i = 0;i<=30;i++)
        {
            ans = pow(2,i);

            if(ans == n)
            {
                return true;
            }
            
        }
        return false;
        
    }
};


*/