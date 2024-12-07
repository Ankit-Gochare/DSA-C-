#include<iostream>
using namespace std;

// constructor and types of constructor 


class customer
{
    string name;
    int acc , bal , pin;


    public:
    // default constructor

    customer()
    {
        cout<<"thank you for choosing us \n";
    }

    // parameterized constructor

    customer(string name , int acc ,int bal ,int pin)
    {
        // this-> is useed because of the same name  
     this->name =name;
     this->acc=acc;
     this->bal = bal;
     this->pin = pin;

    }

    // customer without pin
    // Inline constructor

    inline customer(string n , int a , int b ) : name(n) , acc(a) , bal(b)  
    {

    }


     // making copies of the acccounts 
    // copy constructor 

    customer(customer &Account)
    {
        name = Account .name;
        acc = Account.acc;
        bal = Account.bal;
        pin= Account.pin;
    }
  
    void get_details(int pin)
    {
        cout<<"name : "<<name<<endl;

        if (this->pin==pin)
        {
            cout<<"Account no. : "<<acc<<endl<<"Balance : "<<bal<<endl;
        }

        else{
            cout<<"invalid pin\n";
        }
    }

    void get()
    {
        cout<<"name : "<<name<<endl;
        cout<<"Account no. : "<<acc<<endl<<"Balance : "<<bal<<endl;
    }

};

int main()
{
    // default constructor
    customer A1;

// parameterized constructor
    customer A2("Ankit", 101 , 500 , 1234567);
    customer A3("Damo" , 102 ,5000,123456789);

    A2.get_details(12345); // invalid pin
    A3.get_details(123456789); // correct pin 

// inline constructor
    customer A4("Aman" , 103 , 1000);
    A4.get();


// copy constructor
    customer A5(A2);
    A5.get_details(1234567);

    // copying using assignment operator
    customer A6;
    A6 = A3;

    A6.get_details(123456789);


}



// Resources in  advance 

// class resources 
// {
//     int *roi;

//     public:

//     resources()
//     {
//         roi = new int[10];
//         // agar array available nhi hoga to yhi par error aa jayega 

//         cout<<"Resource granted\n";
//     }
// };

// int main()
// {
//     resources R1;
// }


