#include<iostream>
using namespace std;

// *********************************************************************************************************************************
                                   
//                                    Largest element of Array

// **************************************************************************************************************************************
// int main()
// {

//       int Arr[10] = {1,12,22,21,56,20,2,8,963,20};
//       int a = 0;

//       for(int i = 0;i<10;i++)
//       {

//             if(a < Arr[i])
//             {
//                   a = Arr[i];
//             }
            
//       }
//       cout<<"Largest element is:  "<<a;
//       return 0;
// }

// ******************************************************************************************************************************************
//                                          Sum of all element of Array
// ******************************************************************************************************************************************

// int ArrSum(int Arr[], int n)
// {

//       int isum = 0;

//       for(int i =1; i<= n;i++)
//       {
//             isum = isum + Arr[i];
//       }

//       return isum;
// }


// int main()
// {
//       int Arr[100];
//       int size = 0;
//       cout<<"Enter the size of array: ";
//       cin>>size;

//       for(int i = 1;i<= size;i++)
//       {
//             cin>>Arr[i]; 
//       }

//       int sum = ArrSum(Arr,size);
//       cout<<"Sum of all element is: "<<sum;
// }

//***************************************************************************************************************************************************************************
//                                                      Linear search
//****************************************************************************************************************************************************************************

// Linear search is a method for searching for an element in a collection of elements.
//            In linear search, each element of the collection is visited one by one in a sequential fashion
//             to find the desired element. Linear search is also known as sequential search



// bool search(int Arr[],int n, int key)
// {
//       for(int i = 0;i<=n;i++)
//       {
//             if(Arr[i] == key)
//             {
//                   return 1;
//             }
//       }
      
//       return 0;
      
// }


// int main()
// {
//       int Arr[10] = {12,52,65,42,0,23,85,63,30,1};
//       cout<<"Enter the key u want to search: ";
//       int key = 0;
//       cin>>key;

//       bool found = search(Arr,10,key);

//       if(found == true)
//       {
//             cout<<"key is Present";
//       }
//       else{
//             cout<<"key is Abesent";
//       }
//       return 0;
// }

// ******************************************************************************************************************************************
//                                           Reverse the element of Array
// ******************************************************************************************************************************************


// void Reverse(int arr[],int n)
// {
//       int start  = 0;
//       int end  = n-1;

//       while(start<=end)
//       {
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//       }
      
// }

// void print(int Arr[],int n)
// {

//       for( int i = 0; i< n;i++)
//       {
//             cout<<Arr[i]<<" ";
//       }
//       cout<<"\n";
// }


// int main()
// {
//       int Arr[6] = {1,25,65,32,45,52};
//       int Brr[5] = {12,01,30,52,896};

//       Reverse(Arr,6);
//       Reverse(Brr,5);

//       print(Arr,6);
//       print(Brr,5);

//       return 0;
// }

