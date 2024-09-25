
#include<iostream>
using namespace std;
//

//******************************************************************************************************************************** */
//                                   Reverse alternate element of Array
//******************************************************************************************************************************** */
// void RevAlt(int Arr[],int n)
// {
//       int temp = 0;
//       for(int i = 0;i<n;i = i+2)
//       {
//             if(i+1 < n)
//             {
//                   //swap(arr[i],arr[i+1]);
//                   temp = Arr[i + 1];
//                   Arr[i +1] = Arr[i];
//                   Arr[i] = temp;
//             }
//       }
// }

// void print(int arr[],int n)
// {
//       for(int i = 0;i<n;i++)
//       {
//             cout<<arr[i]<<" ";
//       }
// }


// int main()
// {
//       int Arr[6] = {23,5,10,26,84,8};
//       int Brr[7] = {1,2,3,4,5,6,7};

//       RevAlt(Arr,6);
//       print(Arr,6);

//       cout<<"\n";

//       RevAlt(Brr,7);
//       print(Brr,7);



//       return 0;
// }
//************************************************************************************************************* */


// *******************************Code studio Questions*************************************************************
//  1.Find Unique

// Problem statement
// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

//  Note:
// Unique element is always present in the array/list according to the given condition.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// Time Limit: 1 sec
// Sample Input 1:
// 1
// 7
// 2 3 1 6 3 6 2
// Sample Output 1:
// 1
// Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice,
//  and the number 1 is present only once. So, the unique number in this array is 1.
// Sample Input 2:
// 2
// 5
// 2 4 7 2 7
// 9
// 1 3 1 3 6 6 7 10 7
// Sample Output 2:
// 4
// Explanation: In the first test case, the array is [2, 4, 7, 2, 7]. Here, the numbers 2 and 7 are
//  present twice, and the number 4 is present only once. So, the unique number in this array is 4.

// 10
// Explanation: In the second test case, the array is [1, 3, 1, 3, 6, 6, 7, 10, 7]. Here, the numbers
//  1, 3, 6, and 7 are present twice, and the number 10 is present only once. So, the unique number in this array is 10.

// **********************************
//  Solution:
//Hint:
      // Same number ka XOR = zero aata hai and o^2 =2 
      // 1^1 = 0 and 1^0 = 1

//  int findUnique(int *arr, int size)
// {
//     //Write your code here
//     int ans = 0;

//     for(int i = 0;i< size;i++)
//     {
//         ans = ans ^ arr[i];

//     }

//     return ans;
// }

//************************************************************************************************************************************
                 

// 2 Duplicate In Array

// Problem statement
// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that
//  is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
// Note :
// A duplicate number is always present in the given array.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <=  T  <= 10
// 2 <=  N <= 10 ^ 5
// 1 <=  ARR[i]  <= N - 1

// Where 'T' denotes the number of test cases, 'N' denotes the number of elements in the array, and 'ARR[i]' denotes the 'i-th' element of the array 'ARR'.

// Time limit: 1 sec
// Sample Input 1:
// 2
// 5
// 4 2 1 3 1
// 7
// 6 3 1 5 4 3 2
// Sample Output 1:
// 1
// 3
// Explanation of sample input 1:
// For the first test case, 
// The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

// For the second test case,
// The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
// Sample Input 2:
// 2
// 6 
// 5 1 2 3 4 2  
// 9
// 8 7 2 5 4 7 1 3 6
// Sample Output 2:
// 2
// 7


// Hints:
// 1. Simply calculate the frequency of each value.
// 2. Try to optimise the above approach by using an array to store the frequencies.
// 3. Think of a solution using Floyd’s cycle finding algorithm.
// 4. Try to think of a solution based on bitwise XOR.
// C++ (g++ 5.4)
// 12345678910111213141516171819
//     for(int i = 0;i<arr.size();i++)
//     {
//         ans = ans^i;
//     }

//     return ans;
	
// }

// **********************************
// solution:

// int findDuplicate(vector<int> &arr) 
// {

//     int ans = 0;
//     // Write your code here
//     for(int i = 0;i<arr.size();i++)
//     {
//         ans = ans^arr[i];
//     }

//     for(int i = 1;i<arr.size();i++)
//     {
//         ans = ans^i;
//     }

//     return ans;
	
// }

//*****************************************************************************************************************************************************************
// Intersection Of Two Sorted Arrays

// Problem statement
// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

// Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

// Note :
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original arrays.
// 4. If there is no intersection present then return an empty array.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 100
// 1 <= N, M <= 10^4
// 0 <= A[i] <= 10^5
// 0 <= B[i] <= 10^5

// Time Limit: 1 sec
// Sample Input 1 :
// 2
// 6 4
// 1 2 2 2 3 4
// 2 2 3 3
// 3 2
// 1 2 3
// 3 4  
// Sample Output 1 :
// 2 2 3
// 3   
// Explanation for Sample Input 1 :
// For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

// For the second test case, only 3 is common so we print 3.
// Sample Input 2 :
// 2
// 3 3 
// 1 4 5
// 3 4 5
// 1 1
// 3
// 6
// Sample Output 2 :
// 4 5
// -1
// C++ (g++ 5.4)
// 123456789101112131415161718192021222324252627282930
// 			j++;
// 		}
// 		if(arr1[i]<arr2[j])
// 		{
// 			i++;
// 		}
// 	}

// 	return ans;
	

// Last saved at 9:16 PM

// ***********************************************************************

// Solution:

// hint: Array is sorted in ascending order


// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.

// 	int i = 0;
// 	int j = 0;
// 	vector<int>ans;

// 	while((i<n) &&(j<m))
// 	{
// 		if(arr1[i] == arr2[j])
// 		{
// 			ans.push_back(arr1[i]);
// 			i++;
// 			j++;

// 		}
// 		if(arr1[i]>arr2[j])  // jr pahiya array cha selected element ha large aasel second array chya selected element peksha tr
                                 // compare krun time complexity vadti tyamule i++
// 		{
// 			j++;
// 		}
// 		if(arr1[i]<arr2[j])   / jr pahiya array cha selected element ha small aasel second array chya selected element peksha tr
                                 // compare krun time complexity vadti tyamule j++

// 		{
// 			i++;
// 		}
// 	}

// 	return ans;
	
// }

//*********************************************************************************************************************************************** */

// Pair Sum

// Problem statement
// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

// Note:

// Each pair should be sorted i.e the first value should be less than or equals to the second value. 

// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= N <= 10^3
// -10^5 <= ARR[i] <= 10^5
// -2 * 10^5 <= S <= 2 * 10^5

// Time Limit: 1 sec
// Sample Input 1:
// 5 5
// 1 2 3 4 5
// Sample Output 1:
// 1 4
// 2 3
// Explaination For Sample Output 1:
// Here, 1 + 4 = 5
//       2 + 3 = 5
// Hence the output will be, (1,4) , (2,3).
// Sample Input 2:
// 5 0
// 2 -3 3 3 -2
// Sample Output 2:
// -3 3
// -3 3
// -2 2
// **************************************
// solution:

// #include <bits/stdc++.h>

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Write your code here.

//    vector<vector<int>>ans;

//    for(int i = 0;i<arr.size();i++)
//    {
//       for(int j = i +1;j<arr.size();j++)
//       {
//          if(arr[i] + arr[j] == s)
//          {
//             vector<int>Temp;
//             Temp.push_back(min(arr[i],arr[j]));
//             Temp.push_back(max(arr[i],arr[j]));
//             ans.push_back(Temp);
//          }
//       }
//    }
//    sort(ans.begin(),ans.end());
//    return ans;
// }

// *********************************************************************************************************************************************************************

//  Find All Triplets With Zero Sum
// Moderate
// 80/80
// Average time to solve is 30m
// Contributed by
// 73 upvotes
// Asked in companies
// Problem statement
// You are given an array Arr consisting of n integers, you need to find all the distinct triplets present in the array which adds up to zero.

// An array is said to have a triplet {arr[i], arr[j], arr[k]} with 0 sum if there exists three indices i, j and k such that i!=j, j!=k and i!=k and arr[i] + arr[j] + arr[k] = 0.

// Note :
// 1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then (2, -3, 1), (-3, 2, 1) etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
// 2. The elements in the array need not be distinct.
// 3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <=  50
// 1 <= N <= 10^3  
// -10^5 <= Arr[i] <= 10^5
// Time Limit: 1 sec
// Sample Input 1 :
//  1
//  5
// -10 5 5 -5 2
//  0
// Sample Output 1 :
// -10 5 5
// Explanation for Sample Input 1 :
// -10 5 5 is the only triplet that adds up to zero. Note that the order of output does not matter, so 5 -10 5 or 5 5 -10 are also acceptable.
// Sample Input 2 :
// 3
// 6
// 1 2 3 -1 -2 -3
// 0
// 4
// 1 2 3 4 
// 1
// 6
// -1 -1 2 2 -1 -1
// 0
// Sample Output 2 :
// 1 2 -3
// -1 -2 3
// -1
// -1 -1 2


// *************************************************
// Solution:

// #include <bits/stdc++.h> 
// vector<vector<int>> findTriplets(vector<int>arr, int n) {
// 	// Write your code here
// 	vector<vector<int>> ans;
//     sort(arr.begin(), arr.end()); // Sort the array to make it easier to find triplets

//     for (int i = 0; i < n - 2; i++) {
//         // Skip duplicates
//         if (i > 0 && arr[i] == arr[i - 1]) {
//             continue;
//         }

//         int j = i + 1, k = n - 1;
//         while (j < k) {
//             int sum = arr[i] + arr[j] + arr[k];
//             if (sum == 0) {
//                 ans.push_back({arr[i], arr[j], arr[k]});

//                 // Skip duplicates
//                 while (j < k && arr[j] == arr[j + 1]) {
//                     j++;
//                 }
//                 while (j < k && arr[k] == arr[k - 1]) {
//                     k--;
//                 }

//                 j++;
//                 k--;
//             } else if (sum < 0) {
//                 j++;
//             } else {
//                 k--;
//             }
//         }
//     }

//     return ans;
// }


//**************************************************************************************************************************************************************************
//   Sort array in 0 1


// void printArray(int arr[],int n)
// {
//       for(int i =0;i<n;i++)
//       {
//             cout<<arr[i]<<" ";
//       }
// }

// void sortone(int arr[],int n)
// {
//       int left = 0;
//       int right = 0;

//       while(left < right)
//       {
//             while(arr[left]==0 && left < right)
//             {
//                   left++;

//             }
//             while(arr[right]==1 && left < right)
//             {
//                   right--;

//             }
//             if((arr[left] == 1) && (arr[right] = 0) && (left < right))
//             {
//                   swap(arr[left] , arr[right]);
//                   left++;
//                   right--;
//             }

//       }
      
// }

// int main()
// {
//       int arr[10] = {0,1,0,1,1,1,1,0,0,0};
//       sortone(arr,10);
//       printArray(arr,10);

//       return 0;
// }

//9*************************************************************************************************************************************************************************************************************

//  Sort 0 1 2

// Problem statement
// You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

// Note :
// Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10
// 1 <= N <= (5 * (10 ^ 5))
// 0 <= ARR[i] <= 2

// Where 'N' is the size of the given array/list.
// And, ARR[i] denotes the i-th element in the array/list.

// Time Limit: 1sec 
// Sample Input 1 :
// 2
// 6
// 0 1 2 2 1 0
// 7
// 0 1 2 1 2 1 2
// Sample Output 1 :
// 0 0 1 1 2 2
// 0 1 1 1 2 2 2
// Sample Input 2 :
// 2
// 7
// 2 2 2 1 1 1 0
// 6
// 2 1 2 0 1 0
// Sample Output 2 :
// 0 1 1 1 2 2 2
// 0 0 1 1 2 2

// ********************************************

// Solution:

// #include <bits/stdc++.h> 
// void sort012(int *arr, int n)
// {
//    //   Write your code here

//    int low = 0;
//     int mid = 0;
//     int high = n - 1;

//     while (mid <= high) {
//         switch (arr[mid]) {
//             case 0:
//                 swap(arr[low], arr[mid]);
//                 low++;
//                 mid++;
//                 break;
//             case 1:
//                 mid++;
//                 break;
//             case 2:
//                 swap(arr[mid], arr[high]);
//                 high--;
//                 break;
//         }
//     }
// }
