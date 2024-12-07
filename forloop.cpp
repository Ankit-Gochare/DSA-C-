#include<iostream>
#include<math.h>
using namespace std;


//fibonacci series = sundarta d lie = 0 1 1 2 3  5 8 13 21

void fibonacci()
{
int term;
cout<<"enter the no. of terms :-";
cin>>term;

int last=0;
int prev=1;
int current=1;

cout<<last<<" "<<prev<< " "<<current<<" ";

for(int i=1; i<=term;i++)
{
   last = prev;
   prev= current;
   current= last +prev;

   cout<<current<<"  ";
}
cout<<endl;
}



// writting anything any no. of times.

void printCount()
{
   for(int i=1 ; i<=5 ; i=i+1)
{
    cout<<"hello loop concept \n";
    }
    

   //print number till n
int n;
   cout<<"enter the value of n :";
   cin>>n;

   for(int count=1 ; count<=n; count=count+1)
   {
    cout<<count<<endl;
   } 
}



//print square of n numbers.
void squares()
{
   int n;
   cout<<"enter the value of n :";
   cin>>n;

   for(int count=1 ; count<=n; count=count+1)
   {
    cout<< count <<  "square is :  "<<count*count<<endl;
   }
}



   //print even number till n.
void evenNum()
{
   int n;
   cout<<"enter the value of n :";
   cin>>n;

   for(int count=2 ; count<=n ; count= count+2)
   {
    cout<<count<<endl;
   }
}


//print odd number till n.
 void oddNum()
 {
   int n;
   cout<<"enter the value of n :";
   cin>>n;

   for(int count=1; count<=n ; count= count+2)
   {
    cout<<count<<endl;
   }
 }




   //print no. from 100 to 200.
void counting()
{
   for(int i=101 ; i<=200 ; i=i+1)
   {
      cout<<i<<endl;
   } 
}


   //print a to z
void alphabets()
{
   for(char name = 'a'; name<='z' ; name= name+1)
   {
      cout<<name<<"  ";
   } 
}



   //print no. from 100 to 1.
void reverseCounting()
{
   for(int i=100 ; i>=1 ; i=i-1)
   {
      cout<<i<<endl;
   }
}


   //print reverse counting from n
void reverseCount()
{
int n ,i;

   cout<<"enter the value of n :";
   cin>>n;

   for(i=n ; i>=1 ; i=i-1)
   {
      cout<<i<<endl ;
   }
}


  //print the series 1,4,7,10.......
void series()
{
  for(int i=1 ; i<=100 ; i=i+3)
  {
   cout<<i<<endl;
  }
}


 //print the table.
void table()
{
 int n , i;

 cout<<"enter the value of n :";
 cin>>n;

 for(i=n ;i<=n*10 ; i=i+n)
 {
   cout<<i<<endl;
 }

}


//print the table.
void tableNum()
{
 int n , i;

 cout<<"enter the value of n :";
 cin>>n;

 for(i=1; i<=10 ; i=i+1)
 {
   cout<<n <<"*" <<i <<"=" <<n*i<<endl;
 }
}
 

//calculating raised to the power,
void exponent()
{
int n ,i , num , pow;
cout<<"enter the number :";
cin>>n;

cout<<"enter the power:";
cin>>pow;

num=n;

for(i=1 ; i<pow ;i=i+1)
{
   num=num*n;
}
cout<<num;
} 


// sum of n natural numbers.
void sum()
{
int n ,i ,sum = 0;

cout<<"enter the number :";
cin>>n;

for(i=1 ; i<=n ; i=i+1)
{
   sum = sum+i;
}
cout<<sum; 
}

//alternate way of printing the sum of n natural numbers
void SumNnum()
{
int n ;
cout<<"enter the number :";
cin>>n;
 cout<<(n*(n+1))/2;
}

//sum of square of n numbers.
void squareSum()
{
int num ,i,sum;
cout<<"enter the number :";
cin>>num;

sum =0;

for(i=1 ;i<=num ;i=i+1)
{
   sum =sum+ (i*i);
   
   
}
cout<<"the sum of the squares is :"<<sum<<endl;
}



//factorial of any no.
void factorial()
{
long long int num ,i,product;
cout<<"enter the number :";
cin>>num;

product = 1;

for(i=1 ;i<=num ;i=i+1)
{
   product = product* i;
   
   
}
cout<<"the factorial of "<<num<<" is :"<<product<<endl;
}


//checking for prime number.
void primeNum()
{
int n,i;

cout<<"enter the number :";
cin>>n;

if(n<2)
{
   cout<<"not prime number\n";
   return;
}
else {
for(i=2; i<n ;i=i+1)
{
   if(n%i==0)
   {
      cout<<"not a prime number\n";
      break;
   } 
}
   cout<<"it is a prime number\n";
}
}

int main()
{
// fibonacci();
// printCount();
// squares();
// evenNum();
// oddNum();
// counting();
// alphabets();
// reverseCounting();
// reverseCount();
// series();
// table();
// tableNum();
// exponent();
// sum();
// SumNnum();
// squareSum();
// factorial();
// primeNum();

}
