#include<iostream>
#include<vector>
using namespace std;

// Polymorphism
// poly means many phism means form
// poly means many forms which is a greek word

// ek male :- kisi ka bhai kisi jaan kisi ka beta , kisis ka bhai , kisi ka pati , kisi ki duniya

// polymorphism is of two types
// 1. Compile time polymorphism
// 2. Run time polymorphism

// 1.Compile time polymorphism
// 
// Two types of compile time polymorphism

// 1.function overloading
// 2. operator overloading

// 1.Function overloading :- using many functions with the same name in a class by taking different number of parameters parameters

// Example

// class Area
// {
//     public:

// // area of circle
//     float CalcArea(int r)
//     {
//         return 3.14*r*r;
//     }

//     // Area of rectangle

//     int CalcArea(int length , int breadth)  // function with the same and but different number of parameters
//     {
//         return length*breadth;
//     }

//     // //Area of square

//     // int calc_area(int side)  // this will give error because we have onr more function with the same name and also have same number of parameter 
//     // {
//     //     return side*side;
//     // }

// };

// int main()
// {
//     Area Circle;
//     float CArea =Circle.CalcArea(3);

//     Area Rectangle;
//     int RArea =Rectangle.CalcArea(4,3);

//     Area Square;
//     int SArea = Square.CalcArea(4,4);

//     cout<<CArea<<endl;
//     cout<<RArea<<endl;
//     cout<<SArea<<endl;


// }


// 2.Operator overloading
// using operators for operations other than the arithematic operations is called operator overloading

// Example

// sum of two complex numbers a+ib
// class Complex
// {
//     int real , imaginery;

//     public:

//     Complex(int real , int imaginery)
//     {
//         this->real=real;
//         this->imaginery=imaginery;
//     }

//     void display()
//     {
//         cout<<real<<"  + i"<<imaginery<<endl;
//     }

// // we can use the operator as function by using the operator keyword and the return type as the class name

//    Complex operator +(Complex &C)
//    {

//     Complex ans;
//     ans.real=real+C.real;
//     ans.imaginery=imaginery+C.imaginery;

//     return ans;

//    }
//    // without a default constructor it will give error
//    // we also have to make a default constructor
//     Complex()
//     {

//     }


// };

// int main()
// {
//     Complex C1(3,2);
//     Complex C2(4,6);

//     Complex C3 = C1+C2;
//     C3.display();


// }



// 2. Run time polymorphism

// virtual functions comes under run time polymorphism

// Virtual Function :-
// the virtual function means the compiler will not decide anything about that function at the compilretime
// it is decided at the run time 


// the pointer of the base class can also store the address of object of the derived class 

// // Example

// class Animal
// {
//     public:

// // declaring the virtual function by the virtual keyword

//     virtual void speak()
//     {
//         cout<<"Hu Hu\n";
//     }

// };

// class Dog : public Animal
// {
//     public:
//     void speak()
//     {
//         cout<<"Bhau Bhau\n";
//     }

//     void greet()
//     {
//         cout<<"Hello\n";
//     }

// };

// class Cat : public Animal
// {
//     public:
//     void speak()
//     {
//         cout<<"Meow\n";
//     }

// };


// int main()
// {
//     // the pointer of the base class can also store the address of object of the derived class 

//     Animal *P;  // pointing to a Animal type value
//     P= new Dog();  // storing the address of new dog
//     P->speak(); // it is printing the speak function of animal class without the virtual keyword 
//     // because it is decided at the compile time

//     // by usig the virtual keyword the compiler will not decide anything about the function at compile time 
//     // And execute at the time of run time 

//     // P->greet();  // the pointer p cannot access this function because the pointer is pointing to the animal class not dog claas

//     // Actual use case of virtual function

// // Address ko nikalon or btao ki vo animal kya bolta h

// // the pointer of the base class can also store the address of object of the derived class 

//     Animal *A;
//     vector<Animal*>animals;
//     animals.push_back(new Dog());
//     animals.push_back(new Cat());
//     animals.push_back(new Animal());
//     animals.push_back(new Dog());
//     animals.push_back(new Cat());

//     // kaise 
//     for(int i=0;i<animals.size();i++)
//     {
//         A=animals[i];
//         A->speak();
//     }
// }


// pure virtual function (Abstract class)
// No object can be made from the abstract class 
// nhi to error aayega 

// Example

class Animal
{
    public:

// declaring the pure virtual function by the virtual keyword and initializing with 0

// pure virtual function(Abstract class)

    virtual void speak()=0;  // ye override hona hi chahiye derived classes me nhi to error aayega  

};

class Dog : public Animal
{
    public:
    void speak()
    {
        cout<<"Bhau Bhau\n";
    }

    void greet()
    {
        cout<<"Hello\n";
    }

};

class Cat : public Animal
{
    public:
    void speak()
    {
        cout<<"Meow\n";
    }

};


int main()
{
    // the pointer of the base class can also store the address of object of the derived class 

    Animal *P;  // pointing to a Animal type value
    P= new Dog();  // storing the address of new dog
    P->speak(); // it is printing the speak function of animal class without the virtual keyword 
    // because it is decided at the compile time

    // by usig the virtual keyword the compiler will not decide anything about the function at compile time 
    // And execute at the time of run time 

    // P->greet();  // the pointer p cannot access this function because the pointer is pointing to the animal class not dog claas

    // Actual use case of virtual function

// Address ko nikalon or btao ki vo animal kya bolta h

// the pointer of the base class can also store the address of object of the derived class 

    Animal *A;
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    // animals.push_back(new Animal());  // this will give error beacuse this is the object of animal class which contains the pure virtual function or abstract class
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    // kaise 
    for(int i=0;i<animals.size();i++)
    {
        A=animals[i];
        A->speak();
    }
}

//...................................................................................................................................
// 1: Difference between Compile time Polymorphism and Runtime Polymorphism

// 2: Overload this Operator ( * Multiply) and Unary Operator (- Minus), with your own Example.

// 3: Create a Virtual Function Example in C++ with your own example.\




// Difference Between Compile-Time Polymorphism and Runtime Polymorphism
// Polymorphism is an essential concept in Object-Oriented Programming (OOP), allowing objects to be treated as instances of their parent class, and enabling multiple methods with the same name to work in different ways. It can be classified into compile-time polymorphism and runtime polymorphism, depending on when the decision about which method to call is made.

// 1. Compile-Time Polymorphism (Static Polymorphism)
// Definition: Compile-time polymorphism, also known as static polymorphism, occurs when the method to be executed is determined at compile time. This type of polymorphism is resolved during the compilation of the program.

// How it Works:

// Method Overloading: Multiple methods can have the same name but differ in the number or types of parameters. The correct method is selected based on the number and type of arguments passed during the method call.
// Operator Overloading: Some languages (like C++ or Python) allow operators to be overloaded to perform different tasks based on the types of operands.
// Example: In Java or C++, method overloading is an example of compile-time polymorphism.

// Java Example (Method Overloading):

// java
// Copy code
// class Calculator {
//   // Method to add two integers
//   int add(int a, int b) {
//     return a + b;
//   }

//   // Method to add three integers (overloading)
//   int add(int a, int b, int c) {
//     return a + b + c;
//   }
// }

// public class Main {
//   public static void main(String[] args) {
//     Calculator calc = new Calculator();
//     System.out.println(calc.add(5, 10)); // Calls the add(int, int) method
//     System.out.println(calc.add(5, 10, 15)); // Calls the add(int, int, int) method
//   }
// }
// Key Characteristics:

// The method to be called is determined at compile time based on the method signature.
// Commonly seen with method overloading and operator overloading.
// Performance: Typically faster because the method binding is done at compile time.
// 2. Runtime Polymorphism (Dynamic Polymorphism)
// Definition: Runtime polymorphism, also known as dynamic polymorphism, occurs when the method to be executed is determined at runtime (during program execution). This type of polymorphism allows methods to be overridden in subclasses.

// How it Works:

// Method Overriding: A subclass can provide a specific implementation for a method that is already defined in its parent class. The appropriate method is chosen at runtime based on the object type (not the reference type) that calls the method.
// This typically occurs when a method in a parent class is overridden by a subclass, and the type of the object being referred to (at runtime) determines which version of the method is executed.
// Example: In Java, method overriding is an example of runtime polymorphism.

// Java Example (Method Overriding):

// java
// Copy code
// class Animal {
//   void sound() {
//     System.out.println("Animal makes a sound");
//   }
// }

// class Dog extends Animal {
//   @Override
//   void sound() {
//     System.out.println("Dog barks");
//   }
// }

// class Cat extends Animal {
//   @Override
//   void sound() {
//     System.out.println("Cat meows");
//   }
// }

// public class Main {
//   public static void main(String[] args) {
//     Animal myAnimal = new Animal();
//     Animal myDog = new Dog();
//     Animal myCat = new Cat();

//     myAnimal.sound(); // Output: Animal makes a sound
//     myDog.sound(); // Output: Dog barks
//     myCat.sound(); // Output: Cat meows
//   }
// }
// Key Characteristics:

// The method to be called is determined at runtime, depending on the object that invokes the method.
// Commonly seen with method overriding in class inheritance hierarchies.
// Performance: It can be slower than compile-time polymorphism because of the dynamic method lookup at runtime.
// Key Differences:
// Feature	Compile-Time Polymorphism	Runtime Polymorphism
// Definition	Polymorphism resolved at compile time.	Polymorphism resolved at runtime.
// Implementation	Achieved through method overloading or operator overloading.	Achieved through method overriding.
// Binding	Early binding (statically bound).	Late binding (dynamically bound).
// Performance	Faster, as decisions are made at compile time.	Slower, as decisions are made at runtime.
// Example	Method overloading, operator overloading.	Method overriding.
// Common Languages	C++, Java (method overloading), Python (operator overloading).	Java, C++, C# (method overriding).
// Flexibility	Less flexible (methods must match signatures).	More flexible (methods can vary based on the object type).
// Summary:
// Compile-time polymorphism (static polymorphism) involves method overloading and operator overloading, where the method resolution occurs at compile time.
// Runtime polymorphism (dynamic polymorphism) involves method overriding, where the method resolution occurs at runtime based on the actual object type.
// Both forms of polymorphism allow for flexibility and code reuse, but they are used in different scenarios depending on when the method binding needs to occur.








