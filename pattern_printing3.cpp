#include<iostream>
using namespace std;

int main()
{
    /*pattern printing
      * 
    * * 
  * * * 
* * * * 
    

   int row ,col,n;

   cout<<"enter the value of n:-";
   cin>>n;

   for(row=1;row<=n;row=row+1)
   {
    for(col=1; col<=n-row; col=col+1)
    {
        cout<<"  ";
    }

    for(col=1 ; col<=row ; col=col+1)
    {
        cout<<"* ";
    }
    cout<<endl;
   }

   

  //patter printing
        1 
      2 2 
    3 3 3 
  4 4 4 4 
5 5 5 5 5 

  int row , col, n;

  cout<<"enter the value of n :-";
  cin>>n;

  for(row=1 ; row<=n ; row=row+1)
  {
    for(col=1 ; col<=n-row ; col=col+1)
    {
        cout<<"  ";
    }

    for(col=1 ; col<=row; col=col+1)
    {
        cout<<row<<" ";
    }

    cout<<endl;
  }
  

 //pattern print

        1 
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5 

 int row , col , n;

 cout<<"enter the number :- ";
 cin>>n;

 for(row=1 ; row<=n ; row =row+1)
 {
    for(col=1 ; col<=n-row ; col=col+1)
    {
        cout<<"  ";
    }
 

 for(col=1 ; col<=row ; col=col+1)
 {
    cout<<col<<" ";
 }
 cout<<endl;
 }

 

//pattern 

        A
      A B
    A B C
  A B C D
A B C D E

int row , col ,n;
char alpha;

cout<<"enter the number :-";
cin>>n;

for(row=1 ; row<=n ; row=row+1 )
{
    for(col=1 ; col<=n-row; col=col+1)
    {
        cout<<"  ";
    }

    for(alpha='A'; alpha<='A'+ row-1; alpha=alpha+1)
    {
        cout<<alpha<<" ";
    }
    cout<<endl;
}



//pattern 
        a
      a b
    a b c
  a b c d
a b c d e
int row, col , n;
char alpha;

cout<<"enter the number :-";
cin>>n;

for(row=1 ; row<=n ; row=row+1)
{
    for(col=1 ;col<=n-row ;col=col+1)
    {
        cout<<"  ";
    }

    for(col=1 ; col<=row ; col=col+1)
    {
        alpha='a'+col-1;
        cout<<alpha<<" ";
    }
    cout<<endl;
}


//pattern 
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

int num ,row, col, n ;

cout<<"enter the number:-";
cin>>n;

for(row=1 ; row<=n ; row=row+1)
{
    for(col=1 ; col<=n-row ; col=col+1)
    {
        cout<<"  ";
    }

    for(num = row ; num>=1 ; num=num-1)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}

//pattern
        *
      * * *
    * * * * * 
    
    
  int row ,col , n;

  cout<<"enter the number";
  cin>>n;

  for(row=1 ; row<=n ; row=row+1)
  {
    for(col=1 ; col<=n-row ; col=col+1)
    {
      cout<<"  ";
    }

    for(col=1 ; col<=row*2-1; col=col+1 )
    {
      cout<<"* ";
      
    }
    cout<<endl;
  } 

  

 //pattern 

        1 
      1 2 1
    1 2 3 2 1       
  1 2 3 4 3 2 1   

 int row, col, n;
  cout<<"enter the number : ";
  cin>>n;

  for(row=1 ; row<=n; row =row+1)
  {
    for(col=1 ; col<=n-row; col=col+1)
    {
      cout<<"  ";
    }

    for(col=1 ; col<=row; col=col+1)
    {
      cout<<col<<" ";
    }

    for(col=row-1; col>=1;col=col-1)
    {
      cout<<col<<" ";
    }

    cout<<endl;
  }

  

 //pattern
 * * * * * * * * *
  * * * * * * *
    * * * * *
      * * * 
        *

 int row, col, n;
cout<<"enter ghe number :- ";
 cin>>n;

for(row=n;row>=1; row=row-1)
{
  for(col=1 ;col<=n-row; col=col+1)
  {
    cout<<"  ";
  }

  for(col=1 ; col<=row*2-1; col=col+1)
  {
    
    cout<<"* ";
    
  }
  cout<<endl;
}


//pattern

* * * * * * * *
* * *     * * *
* *         * *
*             * 
*             *
* *         * *
* * *     * * *
* * * * * * * *


int row , col, n;

cout<<"enter the no. of rows  ";
cin>>n;

//upper part

for(row=n; row>=1; row=row-1)
{
  for(col=row;col>=1; col=col-1)
  {
    cout<<"* ";
  }

  for(col=1; col<=2*n-2*row ; col=col+1)
  {
    cout<<"  ";
  }

  for(col=row; col>=1; col=col-1)
  {
    cout<<"* ";
  }
  cout<<endl;


}

//lower part

for(row=1 ; row<=n; row=row+1)
{
  for(col=1;col<=row; col=col+1)
  {
    cout<<"* ";
  }

  for(col=1;col<=2*n-2*row;col=col+1)
  {
    cout<<"  ";
  }

  for(col=1;col<=row;col=col+1)
  {
    cout<<"* ";
  }

  cout<<endl;
}



//pattern

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

int row, col, n;

//upper part

cout<<"enter the number  ";
cin>>n;

for(row=1 ; row<=n; row=row+1)
{
  for(col=1 ; col<=row;col=col+1)
  {
    cout<<"* ";
  }

  for(col=1 ; col<=2*n-2*row;col=col+1)
  {
    cout<<"  ";
  }

  for(col=1;col<=row;col=col+1)
  {
    cout<<"* ";
  }

  cout<<endl;
}

//lower part

for(row=n-1; row>=1 ;row=row-1)
{
  for(col=row;col>=1 ; col=col-1)
  {
    cout<<"* ";
  }

  for(col=1 ; col<=2*n-2*row;col=col+1)
  {
    cout<<"  ";
  }

  for(col=row;col>=1;col=col-1)
  {
    cout<<"* ";
  }
  cout<<endl;
}



//pattern

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    * 

int row,col,n;

cout<<"enter the number  ";
cin>>n;

//upper part

for(row=1;row<=n;row=row+1)
{
  for(col=1;col<=n-row;col=col+1)
  {
    cout<<" ";
  }

  for(col=1;col<=row;col=col+1)
  {
    cout<<"* ";
  }
  cout<<endl;
}

//lower part

for(row=n;row>=1;row=row-1)
{
  for(col=1;col<=n-row;col=col+1)
  {
    cout<<" ";
  }

  for(col=1;col<=row;col=col+1)
  {
    cout<<"* ";
  }
  cout<<endl;
}
*/





































}