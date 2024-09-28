

// ***********************************Binary Search Problrm************************************************************************************

// Problem 1

// First and Last Position of an Element In Sorted Array

// Problem statement
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.



// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.



// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.


// Example:
// Input: 'arr' = [0,1,1,5] , 'k' = 1

// Output: 1 2

// Explanation:
// If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.


// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 8 2
// 0 0 1 1 2 2 2 2


// Sample output 1:
// 4 7


// Explanation of Sample output 1:
// For this testcase the first occurrence of 2 in at index 4 and last occurrence is at index 7.


// Sample Input 2:
// 4 2
// 1 3 3 5


// Sample output 2:
// -1 -1


// Expected Time Complexity:
// Try to do this in O(log(n)).


// Constraints:
// 1 <= n <= 10^5
// 0 <= k <= 10^9
// 0 <= arr[i] <= 10^9

// Time Limit : 1 second
// *********************************************************************

// Answer:


// int firstOcc(vector<int>& arr, int n , int key)
// {

//     int first  = 0;
//     int end = n-1;
//     int ans = -1;
//     int mid  = 0;

//     while(first <= end)
//     {
//         mid  = (first + end)/2;

//         if(arr[mid]  == key)
//         {
//             ans = mid;
//             end = mid -1;
//         }
//         else if(arr[mid] < key)
//         {
//             first = mid  +1;
//         }
//         else if(arr[mid] > key)
//         {
//             end = mid -1;
//         }

//     }
//     return ans;
// }

// int lastOcc(vector<int>& arr, int n , int key)
// {

//     int first  = 0;
//     int end = n-1;
//     int ans = -1;
//     int mid  = 0;

//     while(first <= end)
//     {
//         mid  = (first + end)/2;

//         if(arr[mid]  == key)
//         {
//             ans = mid;
//             first = mid +1;
//         }
//         else if(arr[mid] < key)
//         {
//             first = mid  +1;
//         }
//         else if(arr[mid] > key)
//         {
//             end = mid -1;
//         }

//     }
//     return ans;
// }




// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> p;
//     p.first  = firstOcc(arr,n,k);
//     p.second  = lastOcc(arr,n,k);
//     return p;
//     // Write your code here
// }

// ****************************************************************************************************************************************************

// **************************Problem 2********************************************************

// 852. Peak Index in a Mountain Array

// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

 

// Example 1:

// Input: arr = [0,1,0]

// Output: 1

// Example 2:

// Input: arr = [0,2,1,0]

// Output: 1

// Example 3:

// Input: arr = [0,10,5,2]

// Output: 1

 

// Constraints:

// 3 <= arr.length <= 105
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array

// **********************************************************************
// solution:  

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {

//         int start = 0;
//         int end = arr.size()-1;
//         int mid = 0;

//         while(start < end)
//         {
//             mid = start + (end-start)/2;
            
//             if(arr[mid]< arr[mid+1])
//             {
//                 start = mid +1;
//             }
//             else
//             {
//                 end = mid;
//             }
//         }
//         return start;
        
//     }
// };
