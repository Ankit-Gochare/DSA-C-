#include<iostream>
#include<exception>
using namespace std;

// Exception Handling in C++
// An Exception is an unaccepted problem that arises during execution of a program and our problem terminates suddenly with some errors or issues

// Exception arises at the run time
// divide by 0 , insufficient memory request

// Example

// class Customer
// {
//     string name;
//     int account;
//     int balance;

//     public:

//     Customer(string name, int account , int balance)
//     {
//         this->name=name;
//         this->account=account;
//         this->balance=balance;

//     }

//     // deposit

//     void Deposit(int amount)
//     {
//         if (amount>0)
//         {
//             balance+=amount;
//             cout<<"Amount of rupees "<<amount<<" is credited successfully\n";
//         }

//  // handling the exceptions in the else statement 
//          else
//         {
//             cout<<"Invalid amount :- Amount should be greater than 0\n";
//         }
//     }

//     // withdraw

//     void withdraw(int amount)
//     {
//         if(amount<=balance && amount>0)
//         {
//             balance-=amount;
//             cout<<"Amount of rupees "<<amount<<" is debited successfully\n";
//         }
//         // now we handle the exceptions in the else statement 
//         else if(amount<0)
//         {
//             cout<<"Invalid amount :- Amount should be greater than 0\n";
//         }
//         else{
//             cout<<"Insufficient Balance\n";
//         }
//     }

// };

// int main()
// {
//     Customer C1("Ankit" , 101 , 999);
//     Customer C2("Damo" , 102 , 1000);
//     C2.Deposit(100);
//     C1.withdraw(9000);  // this will give an exception because of insufficient balance 
//     // So we handle the exception in the withdraw function by using else statements

// }

// Compile time error 
// syntax error

// run time error
// divided by 0 etc


// Better ways of exception Handling

// Try :- it represents a block of code that may through a exception place inside the try block

// Catch :- it represents a block of code that is included when a particular exception is thrown from the try block

// Throw :- An exception in C++ can be thrown using the throw keyword

// Example

// class Customer
// {
//     string name;
//     int account;
//     int balance;

//     public:

//     Customer(string name, int account , int balance)
//     {
//         this->name=name;
//         this->account=account;
//         this->balance=balance;

//     }

//     // deposit

//     void Deposit(int amount)
//     {
//          // handling the exceptions using the throw keyword
//         if(amount<0)
//         throw "Invalid amount :- Amount should be greater than 0";

//         if (amount>0)
//         {
//             balance+=amount;
//             cout<<"Amount of rupees "<<amount<<" is credited successfully\n";
//         }

//     }

//     // withdraw

//     void withdraw(int amount)
//     {
//         if(amount<=balance && amount>0)
//         {
//             balance-=amount;
//             cout<<"Amount of rupees "<<amount<<" is debited successfully\n";
//         }
//         // now we handle the exceptions in the else statement using the throw keyword
//         else if(amount<0)
//         {
//             throw "Invalid amount :- Amount should be greater than 0\n";
//         }
//         else{
//             throw "Insufficient Balance\n";
//         }
//     }

// };

// int main()
// {
//     Customer C1("Ankit" , 101 , 999);
//     Customer C2("Damo" , 102 , 1000);

// // used when we have to stop the xecution after an exception occured 
// // so we can resolve the required error

//     try{
//     C2.Deposit(100);
//     C1.withdraw(9000); 
//     C1.Deposit(10);  // ye chalegi nhi qki iske phle exception aa gya
//     } 

// // to print the exception 
//     catch(const char *e)
//     {
//         cout<<"Exception occured : "<<e<<endl;
//     }

// }



// Other example :- using normal method

// int main()
// {
//     int a , b;

//     cout<<"enter a";
//     cin>>a;

//     cout<<"enter b";
//     cin>>b;

//     if(b==0)
//     {
//         cout<<"divide by zero is not possible\n";
//         return 0;
//     }
//     int c=a/b;

//     cout<<c<<endl;
// }


// Example using the throw try catch method


// int main()
// {
//     int a , b;

//     cout<<"enter a";
//     cin>>a;

//     cout<<"enter b";
//     cin>>b;

// // put the stement that can give error
//     try
//     {
//     if(b==0)
//     throw "divide by 0 is not possible";

//     int c=a/b;

//     cout<<c<<endl;
//     }

//     catch(const char *e)
//     {
//         cout<<"Exception occured : "<<e<<endl;
//     }
// }


// Other Example

// int main()
// {
// //     // int *p = new int[100000000000000000000000000];
//     // cout<<"Memory allocation is successfull\n";
//     // delete[]p;
//     // this will give error  because of too large size 

//     // to resolve we use the try catch 
//     // try catch is advantageous over the if else condition because 
//     // by using the try catch method we know where the errror is happening when we have avery ;engthy code
//     // which is impossible by using else method

//     try{
//     int *p = new int[1000000000000000];
//     cout<<"Memory allocation is successfull\n";
//     delete[]p;

//     }

//     catch(const exception &e)  // exception is a class
//     {
//         cout<<"Exception occured due to line 240 : "<<e.what()<<endl;
//     }

// // code sahi h par kaam nhi kar rha pta nhi q
    

// }


// Exception class

// class std:exception  // parent class

// // child classes for the exception class
// std: bad_alloc
// std: bad_cast 
// std: bad_typeid 
// std: bad_exception  
// {
// std:logic_failure  // parent class for below
// // child classes for the std: logic_failure  class

// std:domain_error 
// std:invalid_argument 
// std:length_error 
// std:out_of_range
// }
// {
// std:runtime_error // parent class
// // child classes of the std:runtime_error class

// std:overflow_error 
// std:range_error 
// std:underflow_error 
// }


// imaginary view of the exception class

// class exception
// {
//     protected:
//     string message;

//     public:

//     exception(string msg)
//     {
//         message=msg;
//     }

//     string what()
//     {
//         return msg;
//     }
// };

// header file for exception class
// #include<exception>

// imaginary view of the exception class

// class runtime_error : public exception
// {
//     protected:
//     public:
//     runtime_error(const string &msg) : exception msg
//     // const use kiya qki jo msg liya vo change nhi hona chahiye

// }

// example

// class Customer
// {
//     string name;
//     int account;
//     int balance;

//     public:

//     Customer(string name, int account , int balance)
//     {
//         this->name=name;
//         this->account=account;
//         this->balance=balance;

//     }

//     // deposit

//     void Deposit(int amount)
//     {
//          // handling the exceptions using the throw keyword
//         if(amount<0)
//         throw runtime_error("Invalid amount :- Amount should be greater than 0"); // runtime error is a class which is a child class of exception class

//         if (amount>0)
//         {
//             balance+=amount;
//             cout<<"Amount of rupees "<<amount<<" is credited successfully\n";
//         }

//     }

//     // withdraw

//     void withdraw(int amount)
//     {
//         if(amount<=balance && amount>0)
//         {
//             balance-=amount;
//             cout<<"Amount of rupees "<<amount<<" is debited successfully\n";
//         }
//         // now we handle the exceptions in the else statement using the throw keyword
//         else if(amount<0)
//         {
//             throw runtime_error("Invalid amount :- Amount should be greater than 0\n");
//         }
//         else{
//             throw "Insufficient Balance\n"; // this is for the default catch block 
//         }
//     }

// };

// int main()
// {
//     Customer C1("Ankit" , 101 , 999);
//     Customer C2("Damo" , 102 , 1000);

//     try{
//     C2.Deposit(100);
//     C1.withdraw(9000); 
//     C1.Deposit(10);  // ye chalegi nhi qki iske phle exception aa gya
//     } 

// // to print the exception 
// // we can use multiple catch blocks when needed
//     catch(const runtime_error &e)
//     {
//         cout<<"Exception occured : "<<e.what()<<endl;
//     }

//     catch(const bad_alloc &e)
//     {
//          cout<<"Exception occured : "<<e.what()<<endl;
//     }

// // we can also write a default catch block to execute when no other catch block executed
//     catch(...) // default catch block
//     {
//         cout<<"Exception occured"<<endl;
//     }
   
// }

// using the bad_alloc , runtime_error classes 
//increses the readability of code

// we can create our own exception classes

class InvalidAmountError :public runtime_error
{
    public:

    InvalidAmountError(const string &msg) : runtime_error(msg){};

};

class InsufficientBalanceError :public runtime_error
{
    public:

    InsufficientBalanceError(const string &msg) : runtime_error(msg)
    {};
};


class Customer 
{
    string name;
    int account;
    int balance;

    public:

    Customer(string name, int account , int balance)
    {
        this->name=name;
        this->account=account;
        this->balance=balance;

    }

    // deposit

    void Deposit(int amount)
    {
        if(amount<0)
        throw InvalidAmountError("Invalid amount :- Amount should be greater than 0"); 

        if (amount>0)
        {
            balance+=amount;
            cout<<"Amount of rupees "<<amount<<" is credited successfully\n";
        }

    }

    // withdraw

    void withdraw(int amount)
    {
        if(amount<=balance && amount>0)
        {
            balance-=amount;
            cout<<"Amount of rupees "<<amount<<" is debited successfully\n";
        }
        
        else if(amount<0)
        {
            throw InvalidAmountError("Invalid amount :- Amount should be greater than 0\n");
        }
        else{
            throw InsufficientBalanceError("Insufficient Balance\n"); // this is for the default catch block 
        }
    }

};

int main()
{
    Customer C1("Ankit" , 101 , 999);
    Customer C2("Damo" , 102 , 1000);

    try{
    C2.Deposit(100);
    C1.withdraw(9000); 
    C1.Deposit(10);  // ye chalegi nhi qki iske phle exception aa gya
    } 

// to print the exception 
// we can use multiple catch blocks when needed
    catch(const InvalidAmountError &e)
    {
        cout<<"Exception occured : "<<e.what()<<endl;
    }

    catch(const InsufficientBalanceError &e)
    {
         cout<<"Exception occured : "<<e.what()<<endl;
    }

// we can also write a default catch block to execute when no other catch block executed
    catch(...) // default catch block
    {
        cout<<"Exception occured"<<endl;
    }
   
}











