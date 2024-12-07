#include<iostream>
using namespace std;

// 4 . Hierarchical Inheritance

// multiple derived classes for a single base class

// Example

// class university
// {
//     protected :

//     string univer;
// };

// class engineering : public university
// {
//     string clg;

//     public:
//     engineering(string clg , string uni)
//     {
//         this->clg=clg;
//         univer=uni;
        
//     }

//      void show()
//     {
//         cout<<"I am a engineering student from "<<clg<<" college\n And my college is "<<univer<<" affiliated\n";
//     }

// };

// class pharmacy : public university
// {
//     string clg;

//     public:
//     pharmacy(string clg , string uni)
//     {
//         this->clg=clg;
//         univer=uni;

//     }

//     void show()
//     {
//         cout<<"I am a pharma student from "<<clg<<" college\n And my college is "<<univer<<" affiliated\n";
//     }

// };

// int main()
// {
//     engineering A1("svce" , "rgpv");
//     pharmacy P1("cdgi", "sage");

//     A1.show();
//     P1.show();


// }