#include<iostream>
using namespace std;
// **************************************** Mini Calculator************************************************
// int main()
// {
//       int num1 = 0;
//       int num2 = 0;
//       char ch;
//       cout<<"Enter the First Number: \n";
//       cin>>num1;
//       cout<<"Enter the Second Number: \n";
//       cin>>num2;
//       cout<<"Which operation you want to perform: \n";
//       cin>>ch;

//       if(ch =='+')
//       {
//             cout<<"Addition of Given Number is : "<<num1 + num2<<"\n";
//       }
//       else if(ch =='-')
//       {
//             cout<<"Subtraction of Given Number is : "<<num1 - num2<<"\n";
//       }
//       else if(ch =='*')
//       {
//             cout<<"Multipication of Given Number is : "<<num1 * num2<<"\n";
//       }
//       else if(ch =='/')
//       {
//             cout<<"Division of Given Number is : "<<num1 / num2<<"\n";
//       }
// }

// *********************************Note Counter****************************************************************

// int main()
// {

//       int number = 0;
//       cout<<"Enter the Amount: \n";
//       cin>>number;

//       int a = 0;
//       a = number / 100;
//       cout<<"Number of 100 RS Notes: "<<a<<"\n";
//       int b = number % 100;
//       int c = b / 50;
//       cout<<"Number of 50 RS Notes: "<<c<<"\n";
//       int d = b % 50;
//       int e = d / 20;
//       cout<<"Number of 20 RS Notes: "<<e<<"\n";
//       int f = d % 20;
//       int g = f / 10;
//       cout<<"Number of 10 RS Notes: "<<g<<"\n";
//       int m = f % 10;
//       int n = m / 5;
//       cout<<"Number of 5 RS Notes: "<<n<<"\n";
//       int x = m % 5;
//       int y = x / 1;
//       cout<<"Number of 1 RS Notes: "<<y;
//       return 0;



// }
//**********************************************************************************************************

// Function:  A program has a well defined task

//************************************************************************************************************


// *********************************************Find nCr**************************************************************

// int fact(int num)
// {
//       int ians = 1;

//       for(int i= 1;i <= num;i++)
//       {
//             ians = ians*i;

//       }
//       return ians;
//       //cout<<ians;
// }

// int nCr(int m, int n)
// {
//       int x = 0;
//       int y = 0;
//       int z = 0;
//       int ans = 0;


//       x = fact(m);
//       y = fact(n);
//       z = fact(m - n);
//       int j = y * z;

//       ans = x/j;

//       return ans;



// }

// int main()
// {

//       int n  = 0;
//       int r  = 0;
//       int iRet  = 0;

//       cout<<"Enter the value of n: ";
//       cin>>n;
//       cout<<"Enter the value of r: ";
//       cin>>r;

//       iRet = nCr(n,r);

//       cout<<"Answer is: "<<iRet;

//       return 0;

// }

// ********************************************N th term of fibonacci series***************************************************

// int fibonaci(int n)
// {
//       int First = 0;
//       int second  = 1;
      
//       int term = 0;
//       for(int i = 2 ; i<=n;i++)
//       {
//             term = First + second;
//             First = second;
//             second = term;
//       }
//       return second;
// }


// int main()
// {
//       int num = 0;
//       cout<<"Enter the number: ";
//       cin>>num;

//       int iret = fibonaci(num);
//       cout<<"last term of given fibonacci series is: "<<iret;
//       return 0;
// }

// //0 1 1 2 3 5 8 13 