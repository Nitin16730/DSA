#include<iostream>
using namespace std;
/*
Ques 1
Pattern : - 

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

ANS:

int main()
{
      int i = 1;
      int n = 0;
      cin>>n;
      while(i<= n)
      {
            int j  = 1;
            while(j <= n)
            {
                  cout<<j<<" ";
                  j++;
            }
            cout<<"\n";
            i++;
      }
      return 0;
}

*/

/*

QUES. 2

pattern:

6 5 4 3 2 1
6 5 4 3 2 1
6 5 4 3 2 1
6 5 4 3 2 1
6 5 4 3 2 1
6 5 4 3 2 1

ANS:
int main()
{
      int i = 1;
      int n = 0;
      cin>>n;
      while(i<= n)
      {
            int j  = 1;
            while(j <= n)
            {
                  cout<<n-j+1<<" ";
                  j++;
            }
            cout<<"\n";
            i++;
      }
      return 0;
}
*/

int main()
{
      int i = 1;
      int n = 0;
      int j = 1;

      while(i<= n)
      {
            
            while(j <=n)
            {
                  cout<<j<<" ";
                  j++;
            }
            cout<<"\n";
            i++;
      }
}