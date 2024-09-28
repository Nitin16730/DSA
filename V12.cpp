#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
      int start  = 0;
      int end  = n-1;
      int mid = (start + end)/2;

      while(start <= end)
      {
            if(key == arr[mid])
            {
                  return mid;
            }
            else if(key < arr[mid])
            {
                  end = mid-1;
            }
            else if(key > arr[mid])
            {
                  start = mid +1;
            }
            mid  = (start + end)/2;


      }

      return -1;
}

int main()
{
      int Arr[6]  {12,25,45,51,100,186};
     int Brr[5]  {14,27,51,55,58};

      //int iret  = BinarySearch(Arr,6,51);
      int iret  = BinarySearch(Brr,5,58);

      if(iret == -1)
      {
            cout<<"Element is not present in Arry";
      }
      else
      {
            cout<<"Element is present in Arry in index: "<<iret;

      }
}