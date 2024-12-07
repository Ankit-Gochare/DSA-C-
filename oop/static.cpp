#include<iostream>
using namespace std;


// static data member :- 

// They are the attributes of class or class member

// They did not belongs to the objects it belongs to the class 

// It is declared using static keyword

// Only one copy of that member is created for the entire class and is shared by all the objects of the class

// It is initialized before any object of this clas is created 

// It is initialized after the class end and before the main function

// there can be multiole static data member can be present in a single class


// // using static data member to count the number of total customer
// class customer
// {
//     string name;
//     int acc , bal , count=0;

// // declaring the static data member total using static keyword

//     // static int total_customer;

//     public:

// // we declare here so it can be directly accessed from the main function using class name

//     static int total_customer;

//     customer(string n , int account_no , int balance)
//     {
//         // increasing the value of static data member 
//         total_customer++;
        
//         name=n;
//         acc=account_no;
//         bal= balance;
        
//         }

//     void get()
//     {
//         cout<<"@ ";
//         cout<<name<<"   "<<acc<<"   "<<bal<<endl;

//         cout<<"Total customer :"<<total_customer<<endl;
//     }
// };

// // initializing the static data member as 0

// int customer :: total_customer = 0;

// int main()
// {
//     customer A1("Ankit" , 101 , 999);
//     customer A2("Damo", 102 , 50000);
//     customer A3("Aman" , 103 , 40000);

//     A1.get();
//     A2.get();
//     A3.get();

// // the static data member can be directly initialized or accessed from the main function using the class name and scope resolution operator 

//     customer :: total_customer = 3;
//     cout<<customer :: total_customer;
 
// }


// Static member function :-

// It can access the static data member only

// initialized using the staic keyword

// same as the static data member it also belongs to the class and not the objects 

// there can be multiple static member functiions win a single class



// using static data member to count the number of total customer
// And also using the  staic member function to access the staic data member 
// so there is no need to declare the static data member public
// class customer
// {
//     string name;
//     int acc , bal ;

// // declaring the static data member total using static keyword

//     static int total_customer;

//     public:

//     customer(string n , int account_no , int balance)
//     {

//         name=n;
//         acc=account_no;
//         bal= balance;

// // calling the static member function which counts the no. of customers
//         count();
        
//         }


// // the static member function is initialized using the static keyword

//     static void count()
//     {
//         // increasing the value of static data member 
//         total_customer++;

//         cout<<"New Customer added successfully\n";
//      }    

//     static void get_total()
//     {
//         cout<<"Total customer : "<<total_customer<<endl;
     
//     }   

//     void get()
//     {
//         cout<<"@ ";
//         cout<<name<<"   "<<acc<<"   "<<bal<<endl;
//     }
// };

// // initializing the static data member as 0

// int customer :: total_customer = 0;

// int main()
// {
//     customer A1("Ankit" , 101 , 999);
//     customer A2("Damo", 102 , 50000);
//     customer A3("Aman" , 103 , 40000);

//     A1.get();
//     A2.get();
//     A3.get();

// // calling the static member function using the object 
//     A1.get_total();

// // the static member function can be directly accessed from the main function using the class name and scope resolution operator 

// customer :: get_total();

 
// }



// Abstraction :-
// displaying only essential information and hiding the details



// Encapsulation :-
// Wrapping up of data and information in a single unit (class) , while controlling access to them.

// so the user cant access the data directly and ruin the data by providing wrong or invalid informations 

// Example :-

// program for an banking system with withdrawal and deposit function

// class customer
// {
//     string name;
//     int acc , bal ;

// // declaring the static data member total using static keyword

//     static int total_customer;
//     static long int total_balance;

//     public:

//     customer(string n , int account_no , int balance)
//     {

//         name=n;
//         acc=account_no;
//         bal= balance;

//         total_balance+=bal;

// // calling the static member function 
//         count();
        
        
//         }

//     static void count()
//     {
//         // increasing the value of static data member 
//         total_customer++;

//         cout<<"New Customer added successfully\n";
//      } 


//     static void get_total()
//     {
//         cout<<"Total customer : "<<total_customer<<endl;

//         cout<<"Total Balance : "<<total_balance<<endl;
     
//     }  

//     void get()
//     {
//         cout<<"@ ";
//         cout<<name<<"   "<<acc<<"   "<<bal<<endl;
//     }

//     void deposit(int amount)
//     {
//         if(amount>0)
//      {
//         bal+=amount;

//         total_balance+=amount;

//         cout<<"@ "<<name<<endl<<"Last Transaction : deposited rupees "<<amount<<endl<<"Current balance : "<<bal<<endl;
//    }

// else{
//    cout<<"invalid amount\n";
// }
//     }

//     void withdraw(int amount)
//     {
//         if(amount>0 && amount<=bal){
//         bal-=amount;
//         total_balance-=amount;

//         cout<<"@ "<<name<<endl<<"Last Transaction : withdrawl of rupees "<<amount<<endl<<"Current balance : "<<bal<<endl;}

// else{
//    cout<<"invalid amount\n";
// }
//     }
// };

// int customer :: total_customer = 0;

// long int customer :: total_balance =0;

// int main()
// {
//     customer A1("Ankit" , 101 , 90);
//     customer A2("Damo", 102 , 500);
//     customer A3("Aman" , 103 , 400);

//     A1.get();
//     A2.get();
//     A3.get();

//     A1.withdraw(90);
//     A2.deposit(100); 


// customer :: get_total();

// }



// 1: What is the const keyword in Classes, Create a Customer class and Use Const in it.

// 2: What is the difference between Encapsulation and Abstraction

// 1. The const Keyword in Classes and Using It in a Customer Class
// In programming, the const keyword is often used to define variables or values that cannot be changed after being initialized. In the context of a class, const is most commonly used for defining constant fields or properties that should not be modified. In JavaScript (and other languages like C++), you can use const to create fields that are constant values for each object, or you can use it in constructors to ensure that certain properties are always initialized in a specific way.

// Here's an example of how to use const in a JavaScript Customer class:

// javascript
// Copy code
// class Customer {
//   // Using const to declare a constant value
//   static companyName = "TechCorp";  // A constant field for all instances

//   // Constructor with const keyword for immutable properties
//   constructor(name, age) {
//     this.name = name;
//     this.age = age;
//     // You can't use const for instance variables directly, but you can set constants in the constructor
//     Object.freeze(this);  // This makes the instance immutable (optional)
//   }

//   // Method to display customer details
//   display() {
//     console.log(`Customer Name: ${this.name}, Age: ${this.age}, Company: ${Customer.companyName}`);
//   }
// }

// // Creating a new customer instance
// const customer1 = new Customer("Alice", 30);
// customer1.display();

// // Accessing the static constant field
// console.log(Customer.companyName);
// Key points:
// The companyName property is static and constant for all instances of the Customer class.
// In the constructor, the Object.freeze(this) method is used to prevent modifications to the customer instance once it’s created. This is like applying immutability, which is not directly the same as using const but has a similar effect.
// 2. Difference Between Encapsulation and Abstraction
// Encapsulation and Abstraction are two key Object-Oriented Programming (OOP) concepts, but they serve different purposes:

// Encapsulation:

// Definition: Encapsulation is the concept of bundling the data (variables) and methods (functions) that operate on the data into a single unit, i.e., a class. It also refers to restricting access to some of the object's components to prevent unauthorized access and modification.
// Purpose: It helps to protect the internal state of an object and only allows access or modification through well-defined methods (getters and setters).
// Example: In a Customer class, you might want to protect the age property from being modified directly and only allow it to be updated using a setter method that validates the input.
// javascript
// Copy code
// class Customer {
//   constructor(name, age) {
//     this.name = name;
//     this._age = age;  // private-like property (by convention, not enforced in JS)
//   }

//   // Getter for age
//   getAge() {
//     return this._age;
//   }

//   // Setter for age with validation
//   setAge(age) {
//     if (age > 0 && age < 150) {
//       this._age = age;
//     } else {
//       console.log("Invalid age");
//     }
//   }
// }

// let customer = new Customer("Bob", 25);
// customer.setAge(30); // Valid
// console.log(customer.getAge()); // 30
// customer.setAge(200); // Invalid age
// Key feature: The age property cannot be modified directly from outside the class. Access is granted through controlled methods (getAge and setAge).
// Abstraction:

// Definition: Abstraction is the concept of hiding the complex implementation details of a system and exposing only the necessary or relevant parts to the user. The idea is to define the what an object does, without focusing on how it does it.
// Purpose: It allows a programmer to use objects without needing to understand the full details of their implementation. Abstraction can be achieved using abstract classes or interfaces.
// Example: In a Customer class, abstraction could be used by defining a makePurchase method that hides the complexity of the purchase process, such as verifying payment, checking stock, etc.
// javascript
// Copy code
// class Customer {
//   constructor(name, balance) {
//     this.name = name;
//     this.balance = balance;
//   }

//   // Abstract method (simulated by defining it but leaving it to subclasses)
//   makePurchase(amount) {
//     console.log(`Purchasing item worth $${amount}`);
//     // Implement purchase logic here
//   }
// }

// class PremiumCustomer extends Customer {
//   constructor(name, balance, discountRate) {
//     super(name, balance);
//     this.discountRate = discountRate;
//   }

//   // Overriding the abstract method
//   makePurchase(amount) {
//     const discountAmount = amount * this.discountRate;
//     const finalPrice = amount - discountAmount;
//     console.log(`Premium customer making purchase of $${finalPrice} after discount`);
//   }
// }

// const customer = new PremiumCustomer("Alice", 1000, 0.1);
// customer.makePurchase(100);
// Key feature: The actual process of making a purchase is abstracted away in the makePurchase method, which can vary across subclasses, but its interface is consistent for any Customer object.
// Key Differences:
// Encapsulation focuses on protecting the internal state of an object and exposing only necessary details.
// Abstraction focuses on hiding complex implementation details and showing only the essential features or behaviors.








