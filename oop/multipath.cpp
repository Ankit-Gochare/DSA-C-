#include<iostream>
using namespace std;

// 6. Multi path Inheritance
// Multiple path se same chij miil rhi h 

// To resolve the error that the compiler is unable to decide that the variable that is coming multiple times or the functions multiple times

// by using the virtual keyword the compiler takes the different things from multiple path as single thing 



// Example

class Human
{
    public:
    string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    }

};

class Youtuber : public virtual Human
{
    public :
    int subscribers;

    void show()
    {
        cout<<"I am a youtuber and i have "<<subscribers<<" subscrubers\n";
    }

};

class Engineer : public virtual Human
{
    public:
    string branch;

    void print()
    {
        cout<<"I am a "<<branch<<" engineer\n";

    }


};

class CodeTeacher : public Engineer ,public Youtuber
{
    public :
    int salary;

    CodeTeacher(string name , string branch , int subscribers , int salary)
    {
        this->name=name;  // this name is coming from two different base classes son it will give error

        // to resolve this we use virtual keyword in the base classe of this derived class
        this->branch=branch;
        this->subscribers=subscribers;
        this->salary=salary;

    }

    void coder()
    {
        cout<<"I am a code taecher and my salary is "<<salary<<endl;
    }

    void Me()
    {
       display();  //this display function is coming from two different base classes so it will give error

       // to resolve this the virtual keyword is used

       print(); 
       show(); 
       coder();
        
    }


};

int main()
{
    CodeTeacher A1("Ankit", "Computer science" , 100, 100);

    A1.Me();

}