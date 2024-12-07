#include<iostream>
using namespace std;

int main ()
{
    /*//pattern printing
    *
    * *
    * * *
    * * * *
    * * * * * 

    int  row , col;


    

    for(row=1 ; row<=5; row=row+1)
    {
        for(col=1 ; col<=row; col=col+1)
        {
            cout<<"*"<<"  ";

        }
        cout<<endl;
    }

    

   //pattern printing
1
1   2
1   2   3
1   2   3   4
1   2   3   4   5

   int row ,col ,r;
   cout<<"enter the no. of rows :";
   cin>>r;

   for(row=1 ; row<=r; row=row+1)
   {
    for(col=1 ; col<=row ; col=col+1)
    {

    

    cout<<col<<"   ";
    }
    cout<<endl;
   }

   

  // pattern printing
1 
2  2
3  3  3
4  4  4  4
5  5  5  5  5
6  6  6  6  6  6

  int  row , col , r;

  cout<<"enter the number of rows :";
  cin>>r;

  for(row=1 ; row<=r ; row=row+1)
  {
    for(col=1 ; col<=row ; col=col+1)
    {
        cout<<row<<"  ";
    }
    cout<<endl;
  }

  

 //pattern printing
1
2  1
3  2  1
4  3  2  1
5  4  3  2  1

 int row , col, r;

 cout<<"enter the numbner of rows : ";
 cin>>r;


 for(row =1 ; row<=r ; row = row +1)
 {
    for(col=row ; col>=1 ; col=col-1)
    {
        cout<<col<<"  ";

    }
    cout<<endl;
 }

 
// pattern printing 
a
b  b
c  c  c
d  d  d  d
e  e  e  e  e
f  f  f  f  f  f  

int row ,r, col;
cout<<"enter the num ber of rows :";
cin>>r;

for(row=1 ; row<=r ; row = row+1 )
{
    char name='a'+(row-1);

    for(col=1 ; col<=row ; col=col+1)
    {
        cout<<name<<"  ";
    }
    cout<<endl;

}


// pattern printing

int row , col , r;

cout<<"enter the number of rows :";
cin>>r;

for(row=r; row>=1; row=row-1)
{
    for(col=row ; col>=1; col=col-1)
    {
        cout<<"*  ";
    }
    cout<<endl;
}



//pattern printing
*  *  *  *  *  *
*  *  *  *  *
*  *  *  *
*  *  *
*  *
*

int row , col, r ;
cout<<"enter the number of rows :";
cin>>r;

for(row = 1 ; row<=r ; row = row+1)
{
    for(col=1 ; col<=r-(row-1); col=col+1 )
    {
        cout<<"*  ";
    }
    cout<<endl;
}



// pattern printing
1  2  3  4  5  
1  2  3  4  
1  2  3  
1  2  
1  

int row , col, r;

cout<<"enter the number of rows :";
cin>>r;

for(row=1 ; row<=r ; row = row +1)
{
    for(col=1; col<=r-(row-1) ; col=col+1)
    {
        cout<<col<<"  ";
    }
    cout<<endl;
}



//pattern printing with alternate method
1  2  3  4  5  
1  2  3  4  
1  2  3  
1  2  
1  

int row , col , r;

cout<<"enter the number of rows :";
cin>>r;

for(row=r ; row>=1 ; row=row-1)
{
    for(col=1 ; col<=row ;col=col+1)
    {
        cout<<col<<"  ";
    }
    cout<<endl;
}



//pattern printing
5  
5  4  
5  4  3  
5  4  3  2  
5  4  3  2  1  

int row , col , r ;

cout<<"enter the number of rows : ";
cin>>r;

for(row = 1 ; row<=r ; row=row+1)
{
    for(col=r ; col>=r-row+1; col=col-1)
    {
        cout<<col<<"  ";

    }
    cout<<endl;
}



char n;
cout<<"enter the capital alphabet :";
cin>>n;

char row;
char space , alpha;
int count=1;

for(row='A';row<=n;row++ )
{
    for(space='A';space<=n-count;space++)
    {
        cout<<"  ";
    }

    char name=n;
    for(alpha='A';alpha<=row ;alpha++)
    {
        cout<<name<<" ";
        name--;
    }
    cout<<endl;
    count++;
}
*/









}