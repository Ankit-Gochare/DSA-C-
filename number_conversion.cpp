#include<iostream>
using namespace std;

int main()
{
/*

// decimal number to binary digits

int num;

cout<<"enter the decimal number :- ";
cin>>num;

int rem , ans=0 , mul=1;

while(num>0)
{
    rem = num%2;

    num = num/2;

    ans=rem*mul +ans;

    mul=mul*10;
}

cout<<ans<<endl;

// decimal number to binary digits

int n;

cout<<"enter the decimal number :- ";
cin>>n;

lon int ans =0;
int rema , mult=1;

while(n>0)
{
    rema = n&1;

    n= n>>1;

    answ+=rema*mult;

    mult*=10;
}

cout<<answ<<endl;



//binary digit to decimal number

int num;

cout<<"enter the binary form :-";
cin>>num;

int rem , ans = 0 , mul=1;

while(num)
{
    rem = num%10;

    num/=10;

    ans+=rem* mul;

    mul*=2;
}

cout<<ans<<endl;



//decimal number to octa 

int num;

cout<<"enter the binary form :-";
cin>>num;

int rem , ans = 0 , mul=1;

while(num)
{
    rem = num%8;

    num/=8;

    ans+=rem* mul;

    mul*=10;
}

cout<<ans<<endl;



// octa to decimal number

int num;

cout<<"enter the binary form :-";
cin>>num;

int rem , ans = 0 , mul=1;

while(num)
{
    rem = num%10;

    num/=10;

    ans+=rem* mul;

    mul*=8;
}

cout<<ans<<endl;



//binary to octa

//first convert binary to decimal

int num;

cout<<"enter the binary form :- ";
cin>>num;

int rem , ans=0 , mul=1;

while(num>0)
{
    rem=num%10;

    num/=10;

    ans+=mul*rem;

    mul*=2;
}



//now decimal to octa

int answer=0 , rema , mult=1 ;

while(ans>0)
{
  rema=ans%8;

  ans/=8;

  answer+= rema*mult;

  mult*=10;
}

cout<<answer<<endl;

*/

// octa to binary

//first octa to decimal 
int num;
cout<<"enter the octa number :-";
cin>>num;

int rem , ans=0 , mul=1;

while(num>0)
{
    rem=num%10;

    num/=10;

    ans+= rem*mul;

    mul*=8;
}


//now decimal to binary

int rema , answer=0 , mult=1;

while(ans>0)
{
    rema=ans%2;

    ans/=2;

    answer+=rema*mult;

    mult*=10;
}
cout<<answer<<endl;





}