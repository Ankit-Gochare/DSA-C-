#include<iostream>
using namespace std;

int main()
{
/*
// operators in c++

operand :- the data on which operators are used.

types of operator :-

1. arithmetic operator
a> unary arithmetic operator
b> binary arithmetic operator

1.Binary operators :- 
binary operator needs atleast two operands to operate on 
addition(+), substraction(-), multiplication(*) , divide(/) , remainder(%) 

--> prtecedence order :- 
   int < float < double

# jiski precedence jada rhegi ans usi form me aayega 


--> precedence order :-
   
   {* ,/ ,%} have the same precedence 
   {+, -} have the same precedence

   {* ,/ ,%} >>>> {+ ,-}

   but what if the operators in the same bracket comes together in any question ?
   --> then the rule of associativity is used 
      by this the question is solved from left to right

      eg:- 2*3-4/2 == 6-2 = 4

  2. unary operators :- 
     unary operators operates on onlyn oneoperand.
     post incriment(a++) ,pre incriment(++a) ,post decrement(a--) ,pre decrement(--)  

     incriment:- increase the value of data by 1.

     decrement :- decrease the value of data by 1.

     pre :- value phle increase hoti h usk baad operations perform hote h.

     post:- saare operations perform hone k baad value increase ya decrease hoti h.

     

    cout<<13/2<<endl;

    cout<<13.7/2<<endl;

    cout<<13.2*4<<endl;

    cout<<4*13.2<<endl;

    cout<<13%3<<endl;


    int a=10 ,b=5;

    cout<<a++;

    cout<<endl;
    cout<<++b<<endl;

2. comparison operator :-
    comparison operator compares the data 
    it gives ans as true or false , yes or no , 0 or 1 

   equal to equal to(==) , greater than (>) , smaller than (<) , grater than equal to(<=) , smaller than equal to (<=) , not equal to(!=)   

   precedence order :-
   {> ,< , <= ,>=} >>>>>>>  {== , !=}
   if operator from same bracket then associativity rule

   

  int a , b ;

  cout<<"enter the value of a : ";
  cin>>a;

  cout<<"enter the value of b : ";
  cin>>b;

  if(a==b)
  {
    cout<<"yes";
  }

  else{
    cout<<"not equal";
  }
  cout<<endl;

  if(a>b)
  {
    cout<<"yes";
  }

  else{
    cout<<"no";
  }
  cout<<endl;

if(a<b)
  {
    cout<<"yes";
  }

  else{
    cout<<"no";
  }
  cout<<endl;

if(a<=b)
  {
    cout<<"yes";
  }

  else{
    cout<<"no";
  }
  cout<<endl;

  if(a>=b)
  {
    cout<<"yes";
  }

  else{
    cout<<"no";
  }
  cout<<endl;

  if(a!=b)
  {
    cout<<"yes";
  }

  else{
    cout<<"no";
  }
  cout<<endl;

  

 3. logical operators :- 
    they also answers in the form of 0 or 1 

    and(&&), or(||) , not(!)

    and:- if all the statements are correct then it gives 1

    or:- if any one of the ststement is true it gives 1

    not:- if there is zero then it gives 1

    


   int a , b , c;
   char alpha;

   cout<<"program to check the highest number between the three:-"<<endl;

   cout<<"enter a : ";
   cin>>a;

   cout<<"enter b : ";
   cin>>b;

   cout<<"enter c : ";
   cin>>c;

   if(a>b && a>c)
   {
    cout<<"a is greater than b and c ";
   }
   else if(b>a && b>c)
   {
    cout<<"b is greater han a and c";
   }

   else{
    cout<<"c is greater than a and b";
   }
   cout<<endl;

   cout<<"enter the alphabet: ";
   cin>>alpha;

    //or operator

   if(alpha=='a' || alpha=='e'   || alpha=='i' || alpha=='o' || alpha=='u')
   {
    cout<<"alphabet is a vowel";
   }
   else{
    cout<<"alphabet is a consonant";
   }
    //not operator

   cout<<!23<<endl;

   cout<<!0<<endl;

   



 3. bitwie operator :-
 bitwise operator first convert all the data into binary form and then solve them and give ans in the normal form 

 {bitwise and(&) , bitwise or (|) , bitwise xor (^) , complement (~) , right shift(>>) , left shift (<<)} 

 and :- 
 gives 1 if all are 1 and gives 0 if any of it is 0


 or:- 
 gives 1 if any one the digits is 1 and gives 0 if all are 0


 xor :- 
 gives 1 with different digit and gives 0 with same digit


 << (left shift) :- 
 shifts the digit from the binary value from the right to left and adds 0 on the vacant 
 places 
  left shifting decreaes any number :- the number becomes : (number *2^x )
  x is  the number of places left shifted

  left shifting of negative numbers is not defined it is compiler dependent 


 >> (right shift) :- 
  shifts the digit from left to right and adds 0 on the vacant places 

 right shifting decreases the value and the number becomes : (number/2^x )
 x is the number of places shifted 


 ~ (complement) : - 
 complementing any number complements 0 to 1 and 1 to 0     



 --> precedence order :-
     {>> , <<} >>>>> {& , | , ^}


      

 //& operator 

 int ans , a , b;

 cout<<"enter first number: ";
 cin>>a;

 cout<<"enter second number : ";
 cin>>b;

 ans = a & b;

 cout<<"solution is : "<<ans<<endl;

 int answer;
 answer= a|b;

 cout<<"solution is : "<<answer<<endl;

 int jawab = a^b;

 cout<<"solution is : "<<jawab<<endl;

 int lefting = a<<b;

 cout<<"solution is : "<<lefting<<endl;

 int righting = a>>b;

 cout<<"solution is : "<<righting<<endl;

 int yele = ~a ;
 cout<<"solution is : "<<yele<<endl;


 4. assignment operator :-
    used to assign value 
    {=  , *= , /= , += , -= }

    a*=b  :-  a=a*b

    

//prime or not
int n;
cout<<"enter trhe number";
cin>>n;

int prime=2;
while(prime<n)
{
  if(n%prime==0)
  {
    cout<<"not prime";
    break;
  }
  else{
    cout<<"prime";
  }
  prime++;

}
*/





























}