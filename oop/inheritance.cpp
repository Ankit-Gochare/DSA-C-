#include<iostream>
using namespace std;

// Inheritance :- The capability of a class to derive property and characteristics of a class.

// Access specifier :-
// who can access the specifiers
// 1. public :-   external code  &  withinthe class  &  derived class  (3)

// 2. protected :-  within the class  &  derived class (2)

// 3. private :-  within the class (1)

// Example :- 

// class A
// {
//     int prv1;  // thus is private because by default accessfier is privte

//     private:
//     int prv2; 

//     public:
//     int pub1;

//     protected:
//     int prot1;

//     public:

//     void set()
//     {
//         prv1 =1;  // private accessed withinthe class

//         prv2 =2;  // private accessed withinthe class

//         prot1 =3;  // protected accessed withinthe class

//         pub1 =4;  // public accessed withinthe class
//     }
// };

// class B : public A  // by default specifier whwn declaring the child class is public
// {
//     public:

//     void get(int a , int b , int c , int d)
//     {
//         pub1 =a;  // public can be accessed in the derived class

//         prot1 = b;  // protected can be accessed in the derived class

//         // prv1 = c;  // private can't be accessed in the derived class

//         // prv2 =d; // private can't be accessed in the derived class
//     }

//     void show()
//     {
//         cout<<pub1<<endl;    // public can be accessed in the derived class

//         cout<<prot1<<endl;  // protected can be accessed in the derived class

//         // cout<<prv1<<endl;    // private can't be accessed in the derived class

//         // cout<<prv2<<endl;    // private can't be accessed in the derived class
//     }
    

// };

// int main()
// {
//     A A1;
//     A1.pub1 = 5; 
//     cout<<A1.pub1<<endl;  // public accessed by external code

//     //   A1.prv1 = 5;    // private can't be accessed by external code

//     //  A1.prv2 = 5;  // private can't be accessed by external code

//     // A1.prot1 = 5;  // protected can't be accessed by external code

//     B B1; 
//     B1.get(11,22,33,44);
//     B1.show();

//     B B2;
//     B2.pub1 =99;
//     cout<<B2.pub1<<endl;  // public accessed in the derived class and then in externalcode

// }

// access specifer use in declaring the derived class

// public <  protected  < private

// base class    ,   derived class   ->   treated as

// public        ,   public          ->   public

//               ,   protected       ->   protected

//               ,   private         ->   private 

// protected     ,   public          ->   protected

//               ,   protected       ->   protected

//               ,   private         ->   private

// private       ,   public          ->   private

//               ,   protected       ->   private

//               ,   private         ->   private

// Example :-

// class human // this the parent or base class
// {
//     protected:
//     string address = "protected h isliye bta degi";

//     public:
//     string name = "public h bhai ye to sab jaan skte h";

//     private:
//     string age = "private chije naa pucha kar bhai" ;

// };

// class humand1 : public human  // child class or derived class
// {
//     public: 
//     void show()  // functions should be accessed public
//     {
//         cout<<name<<endl; // public can accessed

//         cout<<address<<endl; // protected can be accessed

//         // cout<<age<<endl;  // private cant be accessed
//     }
  
// };

// class humand2 : protected human  // child class or derived class
// {
//     public: 
//     void show2()  // functions should be accessed public
//     {
//         cout<<name<<endl; // public can accessed

//         cout<<address<<endl; // protected can be accessed

//         // cout<<age<<endl;  // private cant be accessed
//     }
  
// };

//  // Nothing can be accessed in this derived class because 
//     // the base class inherited with private specifier

// class humand3 : private human  // child class or derived class
// {

//       public: 
//     void show3()  // functions should be accessed public
//     {
//         cout<<name<<endl; // public can accessed

//         cout<<address<<endl; // protected can be accessed

//         // cout<<age<<endl;  // private cant be accessed
//     }
   
  
// };


// int main()
// {
//     humand1 S1;
//     S1.show();

//     humand2 S2;
//     S2.show2();

//     humand3 S3;
//     S3.show3();

// }



// 1: Take your own example and solve Problem for all the 6 types of inheritance explained in the class. It will make your understanding better.


