#include<iostream>
#include<math.h>
using namespace std;

int sum(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=a[i];
    }
    return ans;
}

float average(int a[],int n)
{
    float ans=0;
    for(int i=0;i<n;i++)
    {
      ans+=a[i];
    }
    float avg=ans/n;
    return avg;
}

void index(int a[], int n,int x)
{
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            index=i;
            break;
        }
    }
    cout<<"the index "<<index<<endl;
}

void print(int a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
        }
}

void printc(char a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
        }
}


void printalpha(char a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        char alpha='a';
        alpha+=i;
        cout<<alpha<<" ";
        
    }
}

int first_small(int a[],int n)
{
    int ans=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<ans)
        ans=a[i];
    }
    return ans;
}

int second_small(int a[],int n,int x)
{
    int ans=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=x)
        {
            ans=min(a[i],ans);
        }
    }
    return ans;
}

int third_small(int a[], int n , int x ,int y)
{
    int ans=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=x && a[i]!=y)
        ans=min(ans,a[i]);
    }
    return ans;
}

int occurence(int a[],int n,int x)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==x)
      count++;
    }
    return count;
}

int between(int a[],int n,int A,int Z)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==A)
        {
            int count=1;
            while(a[i]!=Z)
            {
                count ++;
            }
        }
    }
}

void selectioninc(int a[],int n)
{
    for(int r=0;r<n-1;r++)
    {
        int index=r;
        for(int j=r+1;j<n;j++)
        {
            if(a[j]<a[index])
            index=j;
        }
        swap(a[index],a[r]);
    }
}

void selectiondec(int a[], int n)
{
    for(int r=0;r<n-1;r++)
    {
        int index=r;
        for(int j=r+1;j<n;j++)
        {
            if(a[j]>a[index])
            index=j;
        }
        swap(a[index],a[r]);
        }
}

void selectioninc2(int a[],int n)
{
    for(int r=n-1;r>=1;r--)
    {
        int index=r;
        for(int j=r;j>=0;j--)
        {
            if(a[j]>a[index])
            index=j;
        }
        swap(a[index],a[r]);
    }
}

void selectionc(char a[], int n)
{
    for(int r=0;r<n-1;r++)
    {
        int index =r;
        for(int j=r+1;j<n;j++)
        {
            if(a[j]<a[index])
            index=j;
        }
        swap(a[index],a[r]);

    }
}

void bubbleinc(int a[], int n)
{
    for(int r=n-2;r>=0;r--)
    {
        bool swapped=0;
        for(int j=0;j<=r;j++)
        {
            if(a[j]>a[j+1])
            {
            swap(a[j],a[j+1]);
            swapped=1;
            }
            
        }
        if(swapped==0)
            break;
    }

}

void bubbledec(int a[], int n)
{
    for(int r=n-2;r>=0;r--)
    {
        bool swapped=0;
        for(int j=0;j<=r;j++)
        {
            if(a[j]<a[j+1])
            {
            swap(a[j],a[j+1]);
            swapped=1;
            }
            }
         if(swapped==0)
            break;
    }

}

void bubbleinc2(int a[],int n)
{
    for(int r=0;r<n-1;r++)
    {
        bool swapped=0;
        for(int j=n-1;j>r;j--)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
                swapped=1;
            }
        }
        if(swapped==0)
        break;
    }
}

void bubbledec2(int a[],int n)
{
    for(int r=0;r<n-1;r++)
    {
        bool swapped=0;
        for(int j=n-1;j>r;j--)
        {
            if(a[j]>a[j-1])
            {
                swap(a[j],a[j-1]);
                swapped=1;
            }
        }
        if(swapped==0)
        break;
    }
}

void bubbleincc(char a[], int n)
{
    for(int r=n-2;r>=0;r--)
    {
        bool swapped=0;
        for(int j=0;j<=r;j++)
        {
            if(a[j]>a[j+1])
            {
            swap(a[j],a[j+1]);
            swapped=1;
            }
            
        }
        if(swapped==0)
            break;
    }

}

void insertioninc(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
            swap(a[j], a[j-1]);
            }

            else
            break;
        }
    }
}

void insertiondec(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j]>a[j-1])
            swap(a[j],a[j-1]);

            else 
            break;
        }
    }
}

void insertioninc2(int a[],int n)
{
    for(int i=n-2;i>=0 ; i--)
    {
        for(int j=i;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
            else 
            break;
        }
    }
}

void insertiondec2(int a[],int n)
{
    for(int i=n-2;i>=0 ; i--)
    {
        for(int j=i;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            swap(a[j],a[j+1]);
            else 
            break;
        }
    }
}


// Binary search

void binaryinc(int a[],int n,int find)
{
    int start=0;
    int end=n-1;
    int mid;
    bool count=0;

    while(start<=end)
    {
        if(a[start]==find )
        {
            cout<<"The number "<<find<<" is present ar arr["<<start<<"]\n";
            count=1;
            break;
        }

         if( a[end]==find)
        {
            cout<<"The number "<<find<<" is present at arr["<<end<<"]\n";
            count=1;
            break;
        }

        else{

            mid=(start+end)/2;

            if(a[mid]==find)
            {
               cout<<"The number "<<find<<" is present at arr["<<mid<<"]\n";
               count=1;
            break;  
            }

            else if(a[mid]>find)
            {
                start=mid+1;
            }

            else if(a[mid]<find)
            {
                end=mid-1;
            }
        }
        
    }
    if(count==0)
    cout<<"the number is not present\n";

}

// Binary search

void binarydec(int a[],int n,int find)
{
    int start=0;
    int end=n-1;
    int mid;
    bool count=0;

    while(start<=end)
    {
        if(a[start]==find )
        {
            cout<<"The number "<<find<<" is present ar arr["<<start<<"]\n";
            count=1;
            break;
        }

         if( a[end]==find)
        {
            cout<<"The number "<<find<<" is present at arr["<<end<<"]\n";
            count=1;
            break;
        }

        else{

            mid=(start+end)/2;

            if(a[mid]==find)
            {
               cout<<"The number "<<find<<" is present at arr["<<mid<<"]\n";
               count=1;
            break;  
            }

            else if(a[mid]>find)
            {
                end=mid-1;
            }

            else if(a[mid]<find)
            {
                start=mid+1;
            }
        }
        
    }
    if(count==0)
    cout<<"the number is not present\n";

}

// First and last position of element

void first_last(int a[],int n,int find)
{
    int start=0 ,end=n-1,mid;

    int first=-1;

    // For first position
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(a[mid]==find)
        {
          first=mid;
          end=mid-1;  
          }

        if(a[mid]<find)
        {
          start=mid+1;
        }

        if(a[mid]>find)
        {
          end=mid-1;
        }
    }

    

    

     // For last position

     start=0,end=n-1; int last=-1;

    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(a[mid]==find)
        {
            last=mid;
          start=mid+1;
        }

        if(a[mid]<find)
        {
         start=mid+1;
        }

        if(a[mid]>find)
        {
          end=mid-1;  
        }
    }  

    if(first==last && first!=-1)
    {
        cout<<"the no. exist only one time at arr["<<first<<"]\n";
    }

    else if(first==last && first==-1)
    {
        cout<<"the no. is not present\n";
    }


    else
    {
    cout<<"The first position is arr["<<first<<"]\n";
    cout<<"the last position is arr["<<last<<"]\n";
    }
}

void position(int a[],int n,int find)
{
    int start=0,end=n-1,mid;
    int index=n;

    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(a[mid]==find)
        {
            index=mid;
             break;
           
            
        }

        else if(a[mid]<find)
        start=mid+1;

        else
        {
            index=mid;
            end=mid-1;
        }
    }
    cout<<index;
}

// finding the square root of given number

void squareroot(int a[],int n,int square)
{
    int ans, start=0,end=n-1,mid;

     if(square<=1)
        {
            ans=square;
            
        }

    while(start<=end)
    {
       
         mid=start+(end-start)/2;

        if(a[mid]*a[mid]==square)
        {
            ans=mid;
             
             break;

        }

    else if(a[mid]*a[mid]>square)
    {
      end=mid-1;
    }

    else{
        ans=mid;
        start=mid+1;
    }
    }
    cout<<ans;
}

// kitni baaar aaya element 

void kitnibaar(int a[],int n,int find)
{
    

    int start=0 ,end=n-1,mid;

    int first=-1;

    // For first position
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(a[mid]==find)
        {
          first=mid;
          end=mid-1;  
          }

        if(a[mid]<find)
        {
          start=mid+1;
        }

        if(a[mid]>find)
        {
          end=mid-1;
        }
    }

    

    

     // For last position

     start=0,end=n-1; int last=-1;

    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(a[mid]==find)
        {
            last=mid;
          start=mid+1;
        }

        if(a[mid]<find)
        {
         start=mid+1;
        }

        if(a[mid]>find)
        {
          end=mid-1;  
        }
    }  

    if(first==last && first!=-1)
    {
        cout<<"the no. exist only one time at arr["<<first<<"]\n";
    }

    else if(first==last && first==-1)
    {
        cout<<"the no. is not present\n";
    }


    else
    {
    cout<<"The first position is arr["<<first<<"]\n";
    cout<<"the last position is arr["<<last<<"]\n";
    }

    cout<<"The given number is present "<<(last-first)+1<<" times\n";
}

// to find the peak index of a mountain array

int peak(int a[],int n)
{
    int start=0 , end=n-1,mid;

    while(start<=end)
    {
        mid =end+(start-end)/2;

        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
        {
            return mid;
        }

        else if(a[mid]>a[mid-1])
        start=mid+1;

        else
        end=mid-1;
    }
   
}

//Find the minimum element and its index in an rotated array

int rotated_min(int a[],int n)
{
    int start=0,end=n-1,mid;
    int ans=a[0] , index=0;

    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(a[mid]>=a[0])
        start=mid+1;

        else
        {
            ans=a[mid];
            index=mid;
            end=mid-1;
        }

    }
   return ans;
}

// searching in an rotated array

void search_rotated(int a[],int n,int target)
{
    int start=0 ,end=n-1,mid,ans=-1;

    while(start<=end)
    {
        mid=start+(end-start)/2;

        // found at mid
        if(a[mid]==target)
        ans=mid;

        // left sorted
        else if (a[mid]>=a[0])
        {
            // present in range
            if(target>=a[0] && target<=a[mid])
            end=mid-1;

            else
            start=mid+1;
            
        }

        // right sorted
        else{
            if(target>=a[mid]&& target<=a[end])
            start=mid+1;

            else
            end=mid-1;
        }
       
    }
    cout<<"preent at : "<<ans;
}

int missing(int a[],int n,int k)
{
  int start =0 , end=-n-1 , mid , ans=n;
  while(start<=end)
  {
    mid = start+(end-start)/2;

    if(a[mid]-mid-1>=k)
    {
        ans=mid;
        end=mid-1;
    }

    else
    start=mid+1;
  }
  return (ans+k);
}



int main()
{
    int arr[9]={1,2,4,5,7,8,10,11,15};

    int num;
    cout<<"enter the number to find : ";
    cin>>num;

    

    print(arr,8);
    cout<<endl;
    cout<<missing(arr,8,num);
    

    

}