#include<iostream>
using namespace std;

int main()
{
/*
      Bit-wise perator:

      int a =3;
      int b =5;

      cout<<"a&b is "<<(a&b)<<"\n";
      cout<<"a|b is "<<(a|b)<<"\n";
      cout<<"a^b is "<<(a^b)<<"\n";
      cout<<"~a is "<<(~a)<<"\n";
      cout<<"left shift of a is "<<(a<<1)<<"\n";
      cout<<"left shift of b is "<<(b<<2)<<"\n";
      cout<<"right shift of a is "<<(a<<1)<<"\n";


      Output:

      a&b is 1
      a|b is 7
      a^b is 6
      ~a is -4
      left shift of a is 6
      left shift of b is 20
      right shift of a is 6
      */
      /*

      ------Fibonacci series---

      int n = 0;
      cout<<"Enter how many terms of fibonacci you want: \n";
      cin>>n;

      cout<<"Fibonacci series is: ";
      int a = 0;
      int b = 1;
      cout<<a<<" "<<b<<" ";


      for(int i  = 0;i<=n;i++)
      {
            int nextNumber = 0;
            nextNumber = a + b;
            cout<<nextNumber<<" ";
            a = b;
            b = nextNumber;
      }

      Output:

      Enter how many terms of fibonacci you want:
      10
      Fibonacci series is: 0 1 1 2 3 5 8 13 21 34 55 89 144
      */
/*

            ----------Prime Number--------

      int number = 0;
      cout<<"Enter the number you want to check is it Prime or Not :\n";
      cin>>number;
      int a = 0;

      for(int i = 2;i<(number-1);i++)
      {
            if(number % i == 0)
            {
                  a++;
            }
           
      }
       if(a == 0)
            {
                  cout<<"Given number is Prime number \n";
            }
            else
            {
                  cout<<"Given number is not Prime number \n";
            }

      return 0;

}
                 --------------OUTPUT---------------

                  Enter the number you want to check is it Prime or Not :
                  15
                  Given number is not Prime number

                  Enter the number you want to check is it Prime or Not :
                  23
                  Given number is Prime number


*/
}
/*
---------------------LeetCode Questions-------------------------------------

Question : 1

1281. Subtract the Product and Sum of Digits of an Integer

Hint
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15

solution:

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum  = 0;
        int pro = 1;

        while(n!=0)
        {
            int rem = n %10;
            pro = pro * rem;
            sum = sum + rem;
            n = n/10;
        }

        int ans  = pro - sum;
        return ans;
    }
};


------------------------------------------------------------------------------

Question : 2

191. Number of 1 Bits

Write a function that takes the binary representation of a positive integer and returns the number of 
set bits
 it has (also known as the Hamming weight).

Example 1:

Input: n = 11
Output: 3
Explanation:
The input binary string 1011 has a total of three set bits.

Solution:

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        
    int count = 0;
    
    while (n > 0) {
        // Check if the last bit is set
        //count += n & 1;
        // Right shift the bits
        if(n & 1 == 1)
        {
            count++;
        }
        n >>= 1;
    }
    
    return count;

    }
};
