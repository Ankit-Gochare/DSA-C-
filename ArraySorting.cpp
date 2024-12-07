#include<iostream>
using namespace std;

// Sorting :- 
// arranging data in proper manner or order like dictionary etc.

// there are various types of sorting 

// 1. Selection sorting :-

// Time complexity of this algorithm is o[n^2] & omega[n^2] & theta[n^2]

//  Auxillary space complexity of this algorithm is O[1]

/*
int main()
{
    
 // arranging the given data in ascending order

    int arr[6] ={10,6,3,2,9,4};

    for(int i=0; i<5;i++)
    {
        int index=i;

        for(int j=i+1; j<6; j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        
        swap(arr[i], arr[index]);
    }

    cout<<"Ascending order :-"<<endl;

    for(int i=0; i<6 ; i++)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<endl<<endl;


 // arranging the given data in descending  order



 for(int i=0 ; i<5; i++)
 {
    int index=i;

    for(int j=i+1 ; j<6 ;j++)
    {
        if(arr[j]>arr[index])
        {
            index=j;
        }
    }

    swap(arr[i],arr[index]);
} 

cout<<"Descendig order :-"<<endl;

for(int i=0 ; i<6 ;i++)
{
    cout<<arr[i]<<"  ";
}

cout<<endl;




// by taking input by the user

int size;
cout<<"size should not exceed 1000\n";
cout<<"enter the size of the array :-";
cin>>size;

int arr[1000];

for(int i=0; i<size ;i++)
{
    cout<<"enter the no. :- ";
    cin>>arr[i];
}

cout<<endl<<"the array :-\n";

for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

// Arranging in Ascending order

for(int i=0; i<size-1; i++)
{
    int index=i;

    for(int j=i+1; j<size;j++)
    {
        if(arr[j]<arr[index])
        {
            index=j;
        }
    }
    swap(arr[i], arr[index]);

}

cout<<"Ascending order :-\n";

for(int i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl<<endl;

// Arranging in Descending order

for(int i=0; i<size-1; i++)
{
    int index=i;

    for(int j=i+1; j<size;j++)
    {
        if(arr[j]>arr[index])
        {
            index=j;
        }
    }
    swap(arr[i], arr[index]);

}

cout<<"Decsending order :-\n";

for(int i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl<<endl;




   int arr[6] ={10,6,3,2,9,4};

   // Arranging the data in Descending order by reverse method

    for(int i=5; i>=0;i--)
    {
        int index=i;

        for(int j=i; j>=0; j--)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        
        swap(arr[i], arr[index]);
    }

    cout<<"Descending order :-"<<endl;

    for(int i=0; i<6 ; i++)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<endl<<endl;


 // arranging the given data in Ascending order by reverse method

for(int i=5;i>=0;i--)
{
  
  int index=i;

 for(int j=i ; j>=0; j--)
 {
    if(arr[j]>arr[index])
    {
        index=j;
    }
 }

 swap(arr[index],arr[i]);
}

cout<<"Descendig order :-"<<endl;

for(int i=0 ; i<6 ;i++)
{
    cout<<arr[i]<<"  ";
}

cout<<endl;


}


// 2. Bubble Sorting :-


// Time complexity of this algorithm is o[n^2] & omega[n] & theta[n^2]

//  Auxillary space complexity of this algorithm is O[1]

int main()
{
    int size;
    cout<<"Enter the size of the array :- \n";
    cin>>size;

    int arr[1000];
     
     for(int i=0; i<size ; i++)
     {
      cout<<"enter the data to enter :- \n";
      cin>>arr[i];
     }

cout<<"the array\n";
for(int i=0; i<size ; i++)
     {
      cout<<arr[i]<<" ";
     }

// Ascending order using bubble short
 for(int i=1;i<size;i++)
 {
    bool swapped=0;
    for (int j=0; j<size-i; j++)
    {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j+1]);
            swapped=1;
        }
    }

    if(swapped==0)
    break;
 }  

 cout<<endl<<"the array now :-\n";
for(int i=0; i<size ; i++)
     {
      cout<<arr[i]<<" ";
     }


// Descending order using bubble short
 for(int i=1;i<size;i++)
 {
    bool swapped=0;
    for (int j=0; j<size-i; j++)
    {
        if (arr[j]<arr[j+1])
        {
            swap(arr[j], arr[j+1]);
            swapped=1;
        }
    }

    if(swapped==0)
    break;
 }  

 cout<<endl<<"the array now :-\n";
for(int i=0; i<size ; i++)
     {
      cout<<arr[i]<<" ";
     }   
}

*/

// Insertion sorting :-
// Insertion sorting includes sorting by comparing with a single number

// The Auxillary space comlexity of insertion sorting is O(1)

// The Time comlexity of Insertion sort is O(n^2)   , omega(n)    , theta(n^2)


int main()
{

    int size;
    cout<<"enter the size of the array :- ";
    cin>>size;

    int arr[1000];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"enter the element :- ";
        cin>>arr[i];
    
    }
    
    cout<<"the array :- \n";
    for(int i=0 ; i<size ; i++)
    {
        
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;

    // Insertion sorting Ascending order

    for(int i=1 ; i<size; i++)
    {
        for (int j=i; j>0 ; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }

            else{
                break;
            }
        }
    }
// sorted array

    cout<<"the sorted array :-\n";
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     // Insertion sorting Descending order

    for(int i=1 ; i<size; i++)
    {
        for (int j=i; j>0 ; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }

            else{
                break;
            }
        }
    }
// sorted array

    cout<<"the sorted array :-\n";
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}