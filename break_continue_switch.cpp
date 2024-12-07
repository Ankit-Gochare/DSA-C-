#include<iostream>
using namespace std;

int main ()
{

// break and continue statement can be used in any loop.

//break statement :-
// it breaks the loop nad nothing happend after the satisfication of this statement



int i , n;

cout<<"enter the number : ";
cin>>n;

i=1;
while(i<=n)
{
     if(i==4)
    break;
    cout<<i<<" ";

   i++;
}

//continue statement :-
//in this statement only the statement condition is printed otherwise all are successfully printed 


//print consonant
char i;
char alpha;

cout<<"enter the last character : ";
cin>>alpha;

i='b';
while(i<=alpha)
{
    if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
    continue;

    cout<<i<<" ";

    i++;
}



// switch :-
// float and double are not allowed in case name
// only char and int are allowed

char alpha;

cout<<"enter the alphabet :- ";
cin>>alpha;

switch(alpha)
{
    case 'a':
    cout<<alpha<<" for "<<"apple";
    break;

     case 'b':
    cout<<alpha<<" for "<<"ball";
    break;

     case 'c':
    cout<<alpha<<" for "<<"cat";
    break;

    case 'd':
    cout<<alpha<<" for "<<"dog";
    break;

    case 'e':
    cout<<alpha<<" for "<<"elephant";
    break;

    case 'f':
    cout<<alpha<<" for "<<"fish";
    break;

    case 'g':
    cout<<alpha<<" for "<<"grapes";
    break;

    case 'h':
    cout<<alpha<<" for "<<"hen";
    break;

    case 'i':
    cout<<alpha<<" for "<<"icecream";
    break;

    case 'j':
    cout<<alpha<<" for "<<"jug";
    break;

    case 'k':
    cout<<alpha<<" for "<<"kite";
    break;

    case 'l':
    cout<<alpha<<" for "<<"lion";
    break;

    case 'm':
    cout<<alpha<<" for "<<"mango";
    break;

    case 'n':
    cout<<alpha<<" for "<<"nest";
    break;

    case 'o':
    cout<<alpha<<" for "<<"orange";
    break;

    case 'p':
    cout<<alpha<<" for "<<"peacock";
    break;

    case 'q':
    cout<<alpha<<" for "<<"queen";
    break;

    case 'r':
    cout<<alpha<<" for "<<"rose";
    break;

    case 's':
    cout<<alpha<<" for "<<"ship";
    break;

    case 't':
    cout<<alpha<<" for "<<"tiger";
    break;

    case 'u':
    cout<<alpha<<" for "<<"umbrella";
    break;

    case 'v':
    cout<<alpha<<" for "<<"van";
    break;

    case 'w':
    cout<<alpha<<" for "<<"watch";
    break;

    case 'x':
    cout<<alpha<<" for "<<"xmas";
    break;

    case 'y':
    cout<<alpha<<" for "<<"yatch";
    break;

    case 'z':
    cout<<alpha<<" for "<<"zebra";
    break;

}


























}