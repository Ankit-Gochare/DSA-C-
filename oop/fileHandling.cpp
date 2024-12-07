#include<iostream>
#include<fstream>  // for file handling
#include<vector> // for using vectors
#include<algorithm> // sorting use karne k liye
using namespace std;

// File Handling

// Inbuilt classes

// ofstream class :- used to write in a file
// by forming object  

// ifstream class :- used to read a file
//by forming object

// cin , cout are also objects

// classes 

// class ios_base

// class ios : ios_base

// class istream :ios

// class ostream :ios

// class iostream : istream , ostream

// class ifstream :istream

// class ofstream :ostream

// class fstream : iostream


// // file create or write katne k liye
// int main()
// {
//     // file ko open karna h
//     ofstream fout;

//     fout.open("zoom.txt");  // agar present hui file to open kar dega 
//     // agar file present nhi h to  create kar dega or phir open kar dega 

//     // write kar skta hu

//     fout<<"Hello India";

//     fout.close(); // close karne ka mtlb h saare resources ko release karva dena jo us file ko handle kar rhi h

//     // fout is aobject 
//     // open and close are member functions
// }

// Read karne k liye

// int main()
// {
//     ifstream fin;

//     // file ko open karna
//     fin.open("zoom.txt");

//     // // file ko read karo
//     // space nhi ayega bich me 

//     // char c;
//     // fin>>c;
//     // while(!fin.eof())
//     // {
//     //     cout<<c;
//     //     fin>>c;

//     // }
//     // // 

//     // file ko read karo
//     // space bhi ayega 

//     char c;
//     c=fin.get();
//     while(!fin.eof())
//     {
//         cout<<c;
//        c=fin.get();

//     }
     

//     fin.close();
// }



// vector k data ko kisi file k andar store kara k rkh dena 

// int main()
// {
//     vector<int>arr(5);
//     cout<<"Enter the input : ";
//     for(int i=0;i<5;i++)
//     cin>>arr[i];

//     // file ko open karo
//     ofstream fout;

//     fout.open("zero.txt");

//     for(int i=0 ;i<5;i++)
//     {
//         fout<<arr[i]<<" ";
//     }

//     fout.close();


// }


// jo bhi data vector me dala h usko sort karke file me store karna


// int main()
// {
//     vector<int>arr(5);
//     cout<<"Enter the input : ";
//     for(int i=0;i<5;i++)
//     cin>>arr[i];

//     // file ko open karo
//     ofstream fout;

//     fout.open("zero.txt");

//     fout<<"Oiginal data\n";
//     for(int i=0 ;i<5;i++)
//     {
//         fout<<arr[i]<<" ";
//     }
//     fout<<endl;

//     fout<<"Sorted data\n";
//     sort(arr.begin() , arr.end());
//     for(int i=0;i<5;i++)
//     {
//         fout<<arr[i]<<" ";
//     }

//     fout.close();


// }

// Ek sath pura content kaise read kare

// int main()
// {
//     ofstream fout;

//     fout.open("z1.txt");
//     fout<<"hello Ankit !";
//     fout<<"\nI am your personal assistant\n";
//     fout<<"How may I help you today\n";

//     fout.close();

// // Ek sath pura content read kare

//     ifstream fin;
//     fin.open("z1.txt");

//     string line;
//     while(getline(fin,line))
//     {
//         cout<<line<<endl;
//     }

//     fin.close();
// }


// existing file task.txt k data ko read karna h
// or phir sort karke write karna h





