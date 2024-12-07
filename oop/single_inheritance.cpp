#include<iostream>
using namespace std;

// Types of Inheritance

// 1. Single Inheritance

// Example

// class Human
// {
//     protected:
//     string name;
//     int age;

//     public:
//     void work()
//     {
//         cout<<"I am working\n";
//     }

// };

// class Student : public Human
// {
//     float cgpa;
//     int roll;
    

//     public:

//     Student(string name , int age , int roll_num , float cgpa )
//     {
//         this->name=name;
//         this->age=age;
//         this->roll=roll_num;
//         this->cgpa=cgpa;
//     }

    
//     void show()
//     {
//         cout<<name<<endl<<age<<endl<<roll<<endl<<cgpa<<endl;
//     }
// };

// int main()
// {
//     Student A1("Ankit" , 20 , 27 , 7.14);

//     A1.work();
//     A1.show();

// }



// the constructor of the base class is called first and then the constructor of the derived class

// the destructor of the derived class is called first and then the destructor of the base class 

//Example

// class Human1
// {
//     public:

//     Human1()
//     {
//         cout<<"Hello Human\n";
//     }

//      ~Human1()
//     {
//         cout<<"bye bye Human\n";
//     }

// };



// class Student1 : public Human1
// {
//     public:
//     Student1()
//     {
//         cout<<"Hello Student\n";
//     }

    
//     ~Student1()
//     {
//         cout<<"bye bye Student\n";
//     }

// };

// int main()
// {
//     Student1 S1;

//     Human1 H1;

// }


// we can directly call the constructor of the base class and initialize the values from the derived class constructor 

// Example

// class Human2
// {
//     protected:
//     string name;
//     int age;

//     public:
//     Human2(string name , int age )
//     {
//         this->name=name;
//         this->age=age;
//     }
// };

// class Student2 :public Human2
// {
//     float cgpa;
//     int roll;

//     public:

//     Student2(string name , int age , int roll_num , float cgpa ) : Human2(name,age)
//     {
//         this->roll=roll_num;
//         this->cgpa=cgpa;
//     }

//     // to check if the vallues are initialized or not

//     void show()
//     {
//         cout<<name<<endl<<age<<endl<<roll<<endl<<cgpa<<endl;
//     }

// };

// int main()
// {
//     Student2 A2("Damo" , 21 , 28 , 6.99);

//     A2.show();
// }


// If the name of two function is same (one function in the base class and other in the derived class )
// then the objecyt of base class will call the function in the base class and
// the object of the derived class will call the function in the derived class 

// Example

// class Human2
// {
//     protected:
//     string name;
//     int age;

//     public:

//     Human2(string name , int age )
//     {
//         this->name=name;
//         this->age=age;
//     }

//     void show()
//     {
//         cout<<name<<endl<<age<<endl;
//     }
// };

// class Student2 :public Human2
// {
//     float cgpa;
//     int roll;

//     public:

//     Student2(string name , int age , int roll_num , float cgpa ) : Human2(name,age)
//     {
//         this->roll=roll_num;
//         this->cgpa=cgpa;
//     }

//     // to check if the vallues are initialized or not

//     void show()
//     {
//         cout<<name<<endl<<age<<endl<<roll<<endl<<cgpa<<endl;
//     }

// };

// int main()
// {
//     Student2 A2("Damo" , 21 , 28 , 6.99);

//     A2.show();

//     Human2 H1("Aman" , 19);
//     H1.show();
// }