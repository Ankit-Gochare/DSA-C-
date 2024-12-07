#include<iostream>
using namespace std;

// Multilevel inheritance

// A inherited to B
// B is also inherited to C

// Example

// class Person
// {
//     protected:
//     string name;

//     public:
//     void intoduce()
//     {
//         cout<<"Hello my name is : "<<name<<endl;
//     }

// };

// class Employee : public Person
// {
//     protected:
//     int salary;

//     public:

//     void income()
//     {
//         cout<<"My salary is :"<<salary<<endl;
//     }

// };


// class Manager : public Employee
// {
//     string department;

//     public:

//     Manager(string name, int salary , string department)
//     {
//         this->name=name;
//         this->salary=salary;
//         this->department=department;
//     }

//     void show()
//     {
//         cout<<"I am the manager of : "<<department<<" department\n";
//     }


// };

// int main()
// {
//     Manager M1("Ankit" , 1000 , "Finance");
//     M1.intoduce();
//     M1.show();
//     M1.income();
// }



// Multiple Inheritance

// Multiple base class into a single derived class

// Example of three base classes

// class Engineer
// {
//     protected:

//     string specialization;

//     public:

//     void work()
//     {
//         cout<<"I am a "<<specialization<<" enginner"<<endl;
//     }

// };

// class Youtuber
// {
//     protected:
//     int subscriber;

//     public:

//     void show()
//     {
//         cout<<"I have "<<subscriber<<"  youtube subscribers\n";
//     }
// };

// class Programmer
// {
//     protected:
//     string language;

//     public:

//     void coding()
//     {
//         cout<<"I am a "<<language<<" programmer\n";

//     }


// };

// class Me : public Youtuber , public Engineer , public Programmer
// {
//     protected:
//     string name;

//     public:
//     void intro()
//     {
//         cout<<"I am "<<name<<endl;
//     }

//     Me(string name , string language , string specialization , int subscribers)
//     {
//         this->name=name;
//         this->language=language;
//         this->subscriber=subscribers;
//         this->specialization=specialization;
//     }

//     void print()
//     {
//       intro(); // Me
//       work();  //  Engineer
//       coding(); // Programmer
//       show();  // Youtuber
//     }

// };

// int main()
// {
//     Me Ank("Ankit" ,"C++" , "Computer Science" , 1000);

//     Ank.print();


// }


// the constructor of the first listed base class is called first then
// the constructor of the second listed base class
// and then the third base class's constructor

// And last the constructor of the derived class

// which calss's constructor  called first that class's destructor will be called at the last

// Example

// class A
// {
//     public:

//     A()
//     {
//         cout<<"constructor of A\n";
//     }

//     ~A()
//     {
//         cout<<"Destructor of A\n";
//     }

// };

// class B
// {
//     public:
//       B()
//     {
//         cout<<"constructor of B\n";
//     }

//     ~B()
//     {
//         cout<<"Destructor of B\n";
//     }

// };

// class C
// {
//     public:
//       C()
//     {
//         cout<<"constructor of C\n";
//     }

//     ~C()
//     {
//         cout<<"Destructor of C\n";
//     }

// };

// class D : public A , public C , public B
// {
//     public:
//       D()
//     {
//         cout<<"constructor of D\n";
//     }

//     ~D()
//     {
//         cout<<"Destructor of D\n";
//     }
    
// };

// int main()
// {
//     D D1;
// }