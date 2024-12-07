#include<iostream>
using namespace std ;

//accepted or rejected.
 void decide()
 {   
   int package;

   cout<<"enter the package :";
   cin>>package ;

   if(package>6)
   {
    cout<<"accepted\n";
   }
   else{
    cout<<"rejected\n";
   }
}


//pass or fail.
void Result()
{
   float percentage;

   cout<<"enter your percentage :";
   cin>>percentage ;

   if(percentage<33)
   cout<<"better luck next time ";
   
   else
    cout<<"you have successfully passed the examination\n";

}



//a is greater or b.
void Greater()
{
   int a , b ;
    cout<<"enter the value of a :";
    cin>>a ;

    cout<<"enter the value of b :";
    cin>>b;

    if(a>b)
    cout<<"a is greater than b\n";

    else
    cout<<"b is greter than a\n";
}


//even or odd.
void OddEven()
{
   int a;
   cout<<"enter the number :";
   cin>>a;

   if(a  % 2  == 0)
   cout<<"the nuber is even\n";

   else
   cout<<"the number is odd\n";
}


//age jada h kam .
void age()
{
int age;
cout<<"enter your age :";
cin>>age;
 
 if(age>18)
cout<<"you are a adult you can watch\n";

else
cout<<"chla ja bsdk tu teenage me h abhi\n";
}


//positive negative or zero.
void integer()
{
int number;

cout<<"enter the number :";
cin>>number;

if(number>0)
cout<<"positive\n";

else
{
    if(number == 0)
    cout<<"zero\n";

    else
    cout<<"negative\n";

}
}

    
//positive negative or zero using else if.
void integer2()
{
int number;

cout<<"enter the number :";
cin>>number;

if(number>0)
cout<<"positive";

else if(number==0)
{ cout<<"zero";}

else{
    cout<<"negative";

}
}

//vowel or consonant.
void vowellConso()
{
char alphabet ;

cout<<"enter the alphabet :";
 cin>>alphabet; 

 if(alphabet=='a')
 cout<<"vowel";

 else if(alphabet=='e')
 cout<<"vowel";

else if(alphabet=='i')
 cout<<"vowel";

 else if(alphabet=='o')
 cout<<"vowel";

 else if(alphabet=='u')
 cout<<"vowel";

 else
cout<<"consonant";

}




//day according to number

void daysNum()
{
int day;

cout<<"enter the day :";
cin>>day;

if(day==1)
cout<<"monday";

else if(day==2)
cout<<"tuesday";

else if(day==3)
cout<<"wednesday";

else if(day==4)
cout<<"thursday";

else if(day==5)
cout<<"friday";

else if(day==6)
cout<<"saturday";

else if(day==7)
cout<<"sunday means holiday";

else 
cout<<"there are only 7 days in a week ";
}



int main()
{
decide();
// Result();
// Greater();
// OddEven();
// age();
// integer();
// integer2();
// vowellConso();
// daysNum();
}

    




