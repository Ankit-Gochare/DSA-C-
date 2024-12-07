#include<iostream>
using namespace std;


//it stores same type of data type 
// it stores the data as contigous location

//declaring an array

// data_type   array_name[size of array]

//eg. = int a[100];

// ,methods of storing data to the array :- 5 methods

//  1. int a[5] = {1 , 4 , 5 , 6 , 7};
// it means a[0]=1 , a[1]=4 , a[2]=5 , a[3]=6 ,a[4]=7 this is called indexing 
//  indexing = size of array -1

//  2. int b[] = {1 ,3,6,7,8,9,23};
//  this will make array of the size according to the defaultfloat 


// 3. int d[5]={1 , 3};

// 4.  int c[10];

//     for(i=0;i<10;i++)
//     {
//         cin>>c[i];
//     }

 

//  5. int e[5]={0};
//     valid only for 0
//     in this case 0 will go in all the 5 address    

 // addresss of array = array + index * size of data type

 // int=4byte  , char= 1 byte , 

// printing the data in array of first type

// int main()
// {
//    int arr[5]={1, 4 , 5 ,6 ,9,}; //declaring array
   
//    cout<<"the values in array are:-\n";

//    for(int i=0;i<7;i++)
//    cout<<"the value in arr"<<i<<" is "<<arr[i]<<endl;

//    return 0;
// }
    
// printing the data in array of second type
// int main()
// {
//    int arr[]={1, 4 , 5 ,6 ,9,6,8}; //declaring array
   
//    cout<<"the values in array are:-\n";

//    for(int i=0;i<5;i++)
//    cout<<"the value in arr"<<i<<" is "<<arr[i]<<endl;

//    return 0;
// }  



// // printing the data in array of third type
// int main()
// {
//    int arr[10]={1, 4 , 5 ,6 ,9}; //declaring array
   
//    cout<<"the values in array are:-\n";

//    for(int i=0;i<10;i++)
//    cout<<"the value in arr"<<i<<" is "<<arr[i]<<endl;

//    return 0;
// }  


// printing the data in array of fourth type
// int main()
// {
//    int size;

//    cout<<"enter the size of the array :- ";
//    cin>>size;
   
//    int arr[10]; //declaring array
   
//    for(int i=0;i<size;i++)
//    {
//       cout<<"enter the value to store in arr"<<i<<" :- ";
//       cin>>arr[i];
//    }
//    cout<<"the values in array are:-\n";

//    for(int i=0;i<size;i++)
//    cout<<"the value in arr"<<i<<" is "<<arr[i]<<endl;

//    return 0;
// }  


// printing the data in array of fifth type
// valid only for 0

// int main()
// {
//    int arr[10]={0}; //declaring array
   
//    cout<<"the values in array are:-\n";

//    for(int i=0;i<10;i++)
//    cout<<"the value in arr"<<i<<" is "<<arr[i]<<endl;

//    return 0;
// }  



// searching an element in array 

// int main()
// { 

//    int arr[9] = {1,2,3,4,5,6,7,8,9};

//    int x ;
//    cout<<"enter the number to find :- ";
//    cin>>x;


// for(int i=0; i<9 ;i++)
// {
//    if(arr[i]==x)
//    {
//       cout<<"arr"<<i;
//       return 0;
//    }
//    }
//    cout<<"not present";
// }




// // reverse the array

// int main()
// {

// int  arr[9] = {1,2,3,4,5,6,7,8,9};

// int start=0 , end=8;

// while(start<end)
// {
//    swap(arr[start] , arr[end]);

//    start++;
//    end--;
// }

// for(int i=0;i<9;i++)
// cout<<arr[i]<<"  ";

// }



//finding the second largest number in the array

// int main()
// {
//    int size;

//    cout<<"enter the size of the array :- ";
//    cin>>size;
   
//    int arr[10]; //declaring array
   
//    for(int i=0;i<size;i++)
//    {
//       cout<<"enter the value to store in arr"<<i<<" :- ";
//       cin>>arr[i];
//    }
   
//    int ans=INT16_MIN;

//    for(int i =0;i<size;i++)
//    {
//       if(arr[i]>ans)
//       {
//          ans=arr[i];
//       }

//    }
   
//    int second=INT16_MIN;

//    for(int i=0;i<size;i++)
//    {
//       if(arr[i]!=ans)
//       {
//          second=max(second,arr[i]);
//       }
//    }
//    cout<<"second max no. = "<<second;



//    return 0;
// } 


// // finding the missing number

// int main()
// {

//    int arr[7]={2 ,3,4,5,6,7,8};

//      int sum=0;

//    for(int i=0;i<7;i++)
//     sum+=arr[i];
    
//     int ans=4*9;  
// cout<<"missing number:- "<<ans-sum;
// }


// // finding number from fibonacci series

// int main()
// {
//    int n;
//    cout<<"enter the nth number to find:-";
//    cin>>n;

//    int arr[1000];

//    arr[0]=0;
//    arr[1]=1;

//    for(int i=2; i<=n-1;i++)
//    arr[i]= arr[i-1] + arr[i-2];

// cout<<"the number on that place is:-"<<arr[n-1];
// }


//

// int main()
// {
//    int size;

//    cout<<"enter the size of the array :- ";
//    cin>>size;
   
//    int arr[10]; //declaring array
   
//    for(int i=0;i<size;i++)
//    {
//       cout<<"enter the value to store in arr"<<i<<" :- ";
//       cin>>arr[i];
//    }

//    for(int i=size-2;i>=0;i--)
//    {
//       arr[i+1]=arr[i];
//       cout<<arr[i]<<" ";

//    }
//    arr[0]=arr[size];
// }





 

 



