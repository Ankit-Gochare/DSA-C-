#include<iostream>
using namespace std;

// destructor

class customer
{
    string name;
    int *acc , *bal;

    public:

// constructor to initialize
    customer(string name , int account ,int balance)
    {
        this->name = name;

        acc = new int;  // memory allocated dynamically to pointer
        *acc = account;

        bal = new int;  // memory allocated dynamically to pointer
        *bal= balance;

        cout<<"Account for "<<name<<" is activated\n";
    }

    void get()
    {
        cout<<name<<"    "<<*acc<<"    "<<*bal<<endl<<endl;
    }

    // destructor

    ~customer()
    {
        cout<<"The Account for "<<name<<" is destroyed\n";

        cout<<"The dynamically allocated memories are deleted\n\n";
    }

};

int main()
{
    customer A1("Ankit" , 101 , 99);
    A1.get();

    customer A2("Damo" , 102 , 50000);
    A2.get();
    customer A3("Aman" , 103 , 40000);A3.get();

    // making objects dynamically

    customer *A4 = new customer("Abhiraj" , 104 , 60000);
    customer A5 =*A4;
    A5.get();

   delete A4;   // the memory of the dynamic objects are freed by this
   // the destructor is not called
    
    
}



// Constructor and Destructor

// 1: What is shallow copy and Deep Copy


// 2: Why the Destructor of Objects is executed in reverse order.


// 1. Shallow Copy and Deep Copy in C++
// In C++, a shallow copy and deep copy deal with how objects are copied. These concepts are crucial when dealing with dynamic memory (e.g., new keyword), pointers, or complex objects that contain other objects.

// Shallow Copy:
// A shallow copy copies the values of the data members from the original object to the new object. However, if the object contains pointers to dynamically allocated memory (or other objects), the shallow copy will copy the pointer values, not the objects they point to. This means that the original and the copied object will point to the same memory locations, and changes made to one object can affect the other.

// Example:

// cpp
// Copy code
// #include <iostream>
// using namespace std;

// class Example {
// public:
//     int *arr;
//     Example(int size) {
//         arr = new int[size];
//         for (int i = 0; i < size; ++i) {
//             arr[i] = i + 1;
//         }
//     }
//     // Shallow copy constructor
//     Example(const Example &other) {
//         arr = other.arr;  // Shallow copy (copies pointer, not the data)
//     }
//     ~Example() {
//         delete[] arr;  // Destructor to release memory
//     }
// };

// int main() {
//     Example obj1(5);
//     Example obj2 = obj1;  // Shallow copy

//     obj2.arr[0] = 99;
//     cout << obj1.arr[0] << endl;  // Output will be 99 because both obj1 and obj2 point to the same memory
//     return 0;
// }
// In this example, obj1 and obj2 share the same memory for arr. Changing obj2.arr[0] also modifies obj1.arr[0].

// Deep Copy:
// A deep copy creates a new copy of the object, including all dynamically allocated memory or resources (i.e., it allocates new memory and copies the actual values rather than copying pointers). This ensures that the new object is independent of the original.

// Example:

// cpp
// Copy code
// #include <iostream>
// using namespace std;

// class Example {
// public:
//     int *arr;
//     Example(int size) {
//         arr = new int[size];
//         for (int i = 0; i < size; ++i) {
//             arr[i] = i + 1;
//         }
//     }
//     // Deep copy constructor
//     Example(const Example &other) {
//         arr = new int[5];  // Allocate new memory
//         for (int i = 0; i < 5; ++i) {
//             arr[i] = other.arr[i];  // Copy the values
//         }
//     }
//     ~Example() {
//         delete[] arr;  // Destructor to release memory
//     }
// };

// int main() {
//     Example obj1(5);
//     Example obj2 = obj1;  // Deep copy

//     obj2.arr[0] = 99;
//     cout << obj1.arr[0] << endl;  // Output will be 1, as obj1 and obj2 are independent
//     return 0;
// }
// In this example, obj1 and obj2 have separate memory for arr, so modifying obj2.arr[0] does not affect obj1.arr[0].

// In C++, to make a deep copy you typically need to implement a custom copy constructor and/or copy assignment operator. If not implemented, the default copy constructor does a shallow copy, which might lead to problems like double deletion (when both objects delete the same memory).

// 2. Why the Destructor of Objects is Executed in Reverse Order
// In C++, the destructors of objects are executed in reverse order of their construction (Last In, First Out — LIFO). This is because:

// Stack Allocation of Objects: In C++, when objects are created on the stack (local variables), they are allocated in the order they are defined. However, when the scope ends (e.g., the function returns or the block exits), the objects are destroyed in reverse order, starting with the last object created.

// Consider the following example:

// cpp
// Copy code
// #include <iostream>
// using namespace std;

// class A {
// public:
//     A() { cout << "Constructor A\n"; }
//     ~A() { cout << "Destructor A\n"; }
// };

// class B {
// public:
//     B() { cout << "Constructor B\n"; }
//     ~B() { cout << "Destructor B\n"; }
// };

// int main() {
//     A a;
//     B b;
//     // Destructor of b will be called first, followed by destructor of a
//     return 0;
// }
// Output:

// css
// Copy code
// Constructor A
// Constructor B
// Destructor B
// Destructor A
// In this example:

// A is constructed first, followed by B.
// When the scope of the main() function ends, B is destructed first, and then A.
// The reason for this reverse order is that destructors need to clean up the resources of the objects that were created last (like in a stack structure). If destructors were executed in the same order as constructors, an object may try to use a resource that has already been destroyed.

// Dependency Management: In cases where objects are dependent on one another (e.g., if B uses resources that A created), B must be destroyed before A. If destructors were called in the same order as creation, it might lead to accessing already-destroyed resources, causing undefined behavior.

// Summary:
// Shallow copy: Copies the references to dynamic memory (objects or arrays) rather than the actual data. This can lead to unintended shared references.
// Deep copy: Creates new copies of all the data and objects inside the original object, ensuring that changes to the copy do not affect the original object.
// Destructor execution order: In C++, destructors are called in reverse order of construction because of stack-based memory allocation. This ensures that dependent resources are cleaned up correctly.








