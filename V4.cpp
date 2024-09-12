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

/*
QUE: 3
Pattern:

1 2 3
4 5 6
7 8 9

ANS:

int main()
{ 

      int n;
      cin>>n;

      int i = 1;
      int m = 1;
      while(i<= n)
      {
            int j = 1;
            while(j <=n)
            {
                  cout<<m<<" ";
                  m++;
                  j++;
            }
            cout<<"\n";
            i++;
      }
}
*/

/*

QUES:4
PAttern :

*
* *
* * *
* * * *
* * * * *

ANS:

int main()
{
      int n = 0;
      cin>>n;

      int row =1;

      while(row<= n)
      {
            int col  = 1;
            while(col<= row)
            {
                  cout<<"* ";
                  col++;

            }
            cout<<"\n";
            row++;
      }
}

*/
/*

Que 5

Pattern:

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

ANS:

int main()
{
      int n = 0;
      cin>>n;

      int row =1;

      while(row<= n)
      {
            int col  = 1;
            while(col<= row)
            {
                  cout<<row<<" ";
                  col++;

            }
            cout<<"\n";
            row++;
      }

      return 0;
}
*/
/*
Que: 6

Pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

ANS:

int main()
{
      int n = 0;
      cin>>n;

      int row =1;
      int m= 1;

      while(row<= n)
      {
            int col  = 1;
            while(col<= row)
            {
                  cout<<m<<" ";
                  col++;
                  m++;

            }
            cout<<"\n";
            row++;
      }

      return 0;
}
*/

/*
QUES: 7

pattern : 
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

ANS:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;

      while(row<= n)
      {
            int col = 1;
            int val = row;
           
            while(col<=row)
            {
                 
                 cout<<val<<" ";
                 val++;
                 col++;
            }
            cout<<"\n";
            row++;
      }

      return 0;
}

*/

/*

QUES:8
pattern:
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

ANS:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;

      while(row<= n)
      {
            int col = 1;
            int val = row;
           
            while(col<=row)
            {
                 
                 cout<<val<<" ";
                 val--;
                 //cout<<(row-col+1)<<" ";
                 col++;
            }
            cout<<"\n";
            row++;
      }

      return 0;
}
*/


/*
QUES:
pATTERN:
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

ANS:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;

      while(row<= n)
      {
            int col = 1;
            while(col<= n)
            {
                  char ch = 'A'+row - 1;
                  cout<<ch<<" ";
                  col++;
            }
            cout<<"\n";
            row++;
      }
}

*/
/*
QUES:9

Pattern:
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

ans:
int main()
{
      int n = 0;
      cin>>n;
      int row = 1;

      while(row<= n)
      {
            int col = 1;
            while(col<= n)
            {
                  char ch = 'A'+col - 1;
                  cout<<ch<<" ";
                  col++;
            }
            cout<<"\n";
            row++;
      }
}
*/
/*

QUES : 10

Pattern: 
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y

ANS:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;
      int val = 1;

      while(row<= n)
      {
            int col = 1;
            while(col<= n)
            {
                  char ch = 'A'+val - 1;
                  cout<<ch<<" ";
                  col++;
                  val++;
            }
            cout<<"\n";
            row++;
      }
}
*/
/*

QUE 11

pattern:
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I

Ans:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;

      while(row<= n)
      {
            int col = 1;
            while(col<= n)
            {
                  char ch = 'A'+col+ row - 2;
                  cout<<ch<<" ";
                  col++;
            }
            cout<<"\n";
            row++;
      }
}
*/

/*

Ques:

pattern:
A
B B
C C C
D D D D
E E E E E

ANS:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;
      


      while(row<=n)
      {
            int col = 1;
            while(col <= row)
            {
                  char ch = 'A'+ row -1;
                  cout<<ch<<" ";
                  col++;
            }
            cout<<"\n";
            row++;
      }

      return 0;

}

*/
/*
QUES:

Pattern:
A
B C
C D E
D E F G
E F G H I
F G H I J K

ANS:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;
      


      while(row<=n)
      {
            int col = 1;
            while(col <= row)
            {
                  char ch = 'A'+ row  + col-2;
                  cout<<ch<<" ";
                  col++;
            }
            cout<<"\n";
            row++;
      }

      return 0;

}
*/
/*

QUES:

PAttern
:
E
D D
C C C
B B B B
A A A A A

ANS:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;
      


      while(row<=n)
      {
            int col = 1;
            while(col <= row)
            {
                  char ch = 'A'+ n - row;
                  cout<<ch<<" ";
                  col++;
                  ch--;
            }
            cout<<"\n";
            row++;
      }

      return 0;
}
*/
/*

Question:12
Pattern

E
D E
C D E
B C D E
A B C D E

ANS:

int main()
{
      int n = 0;
      cin>>n;
      int row = 1;
      


      while(row<=n)
      {
            int col = 1;
            char ch = 'A'+ n - row;
            while(col <= row)
            {
                  cout<<ch<<" ";
                  col++;
                  ch++;
            }
            cout<<"\n";
            row++;
      }

      return 0;
}
*/
/*
Question:
Pattern :

    *
   **
  ***
 ****
*****

ANS:
int main()
{
      int n = 0;
      cin>>n;
      

      int row = 1;

      while(row<= n)
      {
            int space = n -row;
            while(space)
            {
                  cout<<" ";
                  space--;
            }
            int col = 1;
            while(col<=  row)
            {
                  cout<<"*";
                  col++;
            }
            cout<<"\n";

            row++;

      }
}
*/
