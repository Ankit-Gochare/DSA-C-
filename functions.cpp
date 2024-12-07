#include<iostream>
using namespace std;

//functions:-

//syntax:-

    // return_type  function_name(parameter1 , parameter2)   //function declare
    // {
    //     {
    //         code part     //function define
    //     }
    //     return value;
    // }

//return type :- int , float , double, char etc.

//function name :- you can name the function anything that you want.

//parameter :- given data or question    

//default parameter:- giving value to the parameter when the making of the function

//so when no argument is given for parameter in the main function then the initial value will work
 


//sum of two number using function
int sum(int a , int b)
{
    int ans=a+b;

    return ans;
}

//product of two numbers
int product(int a , int b)
{
    int ans =a*b;
    return ans;
}

//difference of two numbers
int difference(int a , int b)
{
    int ans =a-b;
    return ans;
}

//void is used when you dont want any returns
void ask()
{
    cout<<"ask if you have some more questions";
}

//main function
int main()
{
    int a ,b;

    cout<<"enter the first number:- ";
    cin>>a;

    cout<<"enter the second number:- ";
    cin>>b;

    cout<<"sum is :- "<<sum(a,b);
    cout<<endl;

    cout<<"product is :- "<<product(a , b);
    cout<<endl;

    cout<<"difference is :- "<<difference(a , b);
    cout<<endl;

    ask();
    cout<<endl;    
}

//prime or not
void prime(int n=3)  //default parameter
{
    if (n<2)
    {
        cout<<"not a prime number\n";
        return ;
    }

    for(int i=2; i<n ;i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime number\n";
            return ;
        }
    }
    cout<<"prime number\n";
}


//factorial of number
int fact(int n)
{
    int ans =1;
    for(int i=1; i<=n ; i++)
    {
        
        ans*=i;

    }
    cout<<"factorial is :-"<<ans<<endl;
}


// int main()
// {
//     int a , b;

//     cout<<"enter the first number :-";
//     cin>>a;

//     cout<<"enter the second number :-";
//     cin>>b;

//     prime(a);
//     fact(a);

//     prime(b);
//     fact(b);

//     prime(b-a);
//     fact(b-a);

//     prime();
// }



//pass by value:- if you make a function for incriment of a number
// and call the function in the main function by giving any argument and then you want to print the increased  value of the argument then yoiur argument will print as it is .
// no incriment will be done in the value.

void incr(int n)
{
    n++;
    cout<<n<<endl; 
}

// int main()
// {
//     int a=10;
//     incr(a);
// }


// pass by reference :- it is written using "&" 
// the incrimented value will be printed

void increment(int &n)
{
    n++;
    return ;
}

// int main()
// {
//     int a=10;
//     increment(a);
//     cout<<a<<endl;
// }



// trying to swap the value by using pass by value

void swapvalue(int a , int b)
{
    int c;
    a=c;
    a=b;
    b=c;
}

// int main()
// {
//     int a, b;

//     cout<<"a=";

//     cin>>a;

//     cout<<"b=";
//     cin>>b;

//     swapvalue(a ,b);
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;

// }


// trying to swap the value by using pass by reference

void swap(int &a , int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

// int main()
// {
//     int a, b;

//     cout<<"a=";

//     cin>>a;

//     cout<<"b=";
//     cin>>b;

//     swap(a , b);
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;

// }



// function overloading :- more than 1 function have the same name but have different parameter data types in the argument

void exch(int &a , int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

void exch(float &d , float &e)     //overloaded function
{
    float f;
    f=d;
    d=e;
    e=f;

}

// int main()
// {
//     int a, b;

//     cout<<"a=";
//     cin>>a;
//     cout<<"b=";
//     cin>>b;

//     exch(a, b);
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
    
//     int d , e;
//     cout<<"d=";
//     cin>>d;
//     cout<<"e=";
//     cin>>e;

//     exch(d , e);
//     cout<<"d="<<d<<endl;
//     cout<<"e="<<e<<endl;



// }


//inbuilt functions :- these are inbuilt in the computer you just have call them.

// int main()
// {
//     int a, b;

//     cout<<"a=";
//     cin>>a;
//     cout<<"b=";
//     cin>>b;

//     swap(a, b);
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
    
//     int d , e;
//     cout<<"float d=";
//     cin>>d;
//     cout<<"float e=";
//     cin>>e;

//     swap(d , e);
//     cout<<"d="<<d<<endl;
//     cout<<"e="<<e<<endl;
// }

    ////////////////////////////

int factorial(int a)
{
    int ans=1;
    for(int i=1;i<=a;i++)
    {
      ans=ans*i;
    }
    return ans;
}

int ncr(int a , int b ,int c)
{
    int combination;
    combination = a/(b*c); 
    return combination;
}


// int main()
// {
//     int n ,r;

//     cout<<"enter n ";
//     cin>>n;
//     cout<<"enter r ";
//     cin>>r;

   

// int factn= factorial(n);


//     int factr= factorial(r);
   
//     int factnr = factorial(n-r);
    
//     cout<<ncr(factn ,factnr ,factr);

// }
















