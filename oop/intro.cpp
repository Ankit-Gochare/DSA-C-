#include<iostream>
using namespace std;

// // when public specifier is used 
// class student
// {
//     public:
//     string name;
//     int age ;

// };

// int main()
// {
//     student S1;
//     S1.name = "Ankit";
//     S1.age= 19;

//     string name = S1.name;
//     int age = S1.age;
//     cout<<name<<endl;
//     cout<<age<<endl;

//     student S2;
//     S2.name = "Damo";
//     S2.age = 21;

// cout<<S2.name<<endl;
// cout<<S2.age<<endl;

// }


// // when private specifier is used 

// class student 
// {
//    private:
//    string name;
//    int age;

//    public:

//    void set(string n , int a)
//    {
//        name =n;
//        age =a;
//    }

//    void get()
//    {
//       cout<<name<<endl<<age<<endl;
//    }



// };

// int main()
// {
//    student s1 ,s2;
//    s1.set("Ankit" ,19);
//    s2.set("Damo" , 21);

//    s1.get();
//    s2.get();
// }


// // some more implememntations from this
// // we can keep conditions for setting or getting the informations 

// class student
// {
//    private:

//    string name;
//    int age;

//    public:

//    void set (string n , int a)
//    {
//      name =n;

//      if(a>0 & a<100)
//      age = a;

//      else
//      cout<<"invalid age(baap se puchh or phir se bhej)\n"; 
//    }

//    void get(int pin)
//    {
//      if(pin == 1234567)
//      cout<<name<<"  "<<age<<endl;

//      else
//      cout<<"chl be chutiye(baap ka maal smjha h kya)\n";
//    }
// };

// int main()
// { 
//     student s1;

//     // give name and age in set function
//     s1.set("Ankit" , 101);
//     s1.get(123456);

//     student s2;
//     s2.set("damo" , 21);
//     s2.get(1234567);

// }

// size of a class 

// // 1. without element

// class A
// {
  
// };

// int main()
// {
//   cout<<sizeof(A);
// }

// // 2. without object and with a single  variable declared

// class A
// {
//   int b;
// };

// int main()
// {
//   cout<<sizeof(A);
// }

// // 3. without object and with multiple variable declared

// class A
// {
//   int b;
//   int c;
//   char d;

// };

// int main()
// {
//   cout<<sizeof(A);
// }

// // 4. with single object and without variable declared

// class A
// {
 
// };

// int main()
// {
//     A obj1;
//   cout<<sizeof(A);
// }

// // 5. with single object and with variable declared

// class A
// {
//   int b;
//   int c;
//   char d;
// };

// int main()
// {
//     A obj1;
//   cout<<sizeof(A);
// }


// // 6. with multiple object and without variable declared

// class A
// {
 
// };

// int main()
// {
//     A obj1 , obj2 , obj3;
//   cout<<sizeof(A);
// }

// // 7. with multiple object and with variable declared

// class A
// {
//  int b;
//    int c;
//    char d;
//  };

//  int main()
//  {
//      A obj1 , obj2 , obj3;

//    cout<<sizeof(A);
//  }


// case 8 :- with multiple objects with data 
//  class student 
//  {
//     private:
//     string name;
//     int age;

//     public:

//     void set(string n , int a)
//     {
//         name =n;
//         age =a;
//     }

//     void get()
//     {
//        cout<<name<<endl<<age<<endl;
//     }



//  };

//  int main()
//  {
//     student s1 ;
//     s1.set("Ankit" ,19);
 
//     student s2;
//     s2.set("Damo" , 21);

//     s1.get();
//    s2.get();

//  cout<<"size :-"<<sizeof(student);
//  }



// Dynamic allocation of objects

 class student 
 {
    private:
    string name;
    int age;

    public:

    void set(string n , int a)
    {
        name =n;
        age =a;
    }

    void get()
    {
       cout<<name<<endl<<age<<endl;
    }



 };

 int main()
 {
    student s1 ;
    s1.set("Ankit" ,19);
 
    student s2;
    s2.set("Damo" , 21);

    s1.get();
   s2.get();

// dynamic object of student
student *s3 = new student;
s3->set("Dynamic" , 1);
s3->get();

 cout<<"size :-"<<sizeof(student)<<endl;
 }




//  Day 99/180 Object Oriented Programming

// 3 Programming Challenges with Classes:

// 1. Bank Customer Class:
// Challenge: Design a Customer class for a bank system that manages customer information and basic operations.
// Attributes:
// name: String containing the customer's full name.
// accountNumber: Unique integer identifying the customer's account.
// accountBalance: Double representing the current balance in the account.
// isActive: Boolean indicating whether the account is active.
// Methods:
// deposit(amount): Adds the specified amount to the account balance.
// withdraw(amount): Deducts the specified amount from the account balance (check for sufficient funds).
// transfer(amount, targetAccount): Transfers the specified amount to another customer's account (within the system).
// printDetails(): Prints the customer's name, account number, and current balance.

// program

// class Customer
// {
//     string name;
//     int accountNumber;
//     int accountBalance;
//     bool isActive;

//     public:

//     Customer(string name , int accountNumber , int accountBalance , bool isActive)
//     {
//         this->name=name;
//         this->accountBalance=accountBalance;
//         this->accountNumber=accountNumber;
//         this->isActive=isActive;
//     }

//     void deposit(int amount)
//     {
//         if(amount<0)
//         {
//            cout<<"Invalid Amount :- Amount should be greater than 0\n)";
//         }
//         else
//         {
//             accountBalance+=amount;
//             cout<<"Rupees "<<amount<<" is credited successfully to :- \n";
//             print();
//         }
//         }

//     void withdraw(int amount)
//     {
//         if(amount<0)
//         {
//             cout<<"Invalid Amount :- Amount should be greater than 0\n)";

//         }

//         else if(amount>accountBalance)
//         {
//            cout<<"Insufficient amount for withdrawl\n)";
//         }
//         else
//         {
//             accountBalance-=amount;
//             cout<<"Rupees "<<amount<<" is debited successfully from :- \n";
//             print();
//         }


//     }

//     void transferAmount(int amount, Customer& targetAccount)
//     {
//         if (amount <= 0)
//         {
//             cout << "Transfer amount must be greater than 0" << endl;
//         } 
//         else if (amount > accountBalance)
//         {
//             cout << "Insufficient funds for transfer." << endl;
//         } 
//         else
//         {
//             accountBalance -= amount;
//             targetAccount.deposit(amount);
//             cout <<name<< " Transferred " << amount << " to " << targetAccount.name << "." << endl<<endl;
//             withdraw(amount);
//         }
//     }

//     void print()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Account Number : "<<accountNumber<<endl;
//         cout<<"Current Balance : "<<accountBalance<<endl;
//         cout << "Account Active: " << (isActive ? "Yes" : "No") <<endl<< endl;
//     }

// };

// int main()
// {
//     Customer C1("Ankit" , 1001 , 500 , 1);

//     C1.print();
//     // C1.deposit(500);
//     // C1.withdraw(300);

//     Customer C2("Damo" , 1002 , 10000 , 1);

//     C2.print();
//     // C2.deposit(1000);
//     // C2.withdraw(500);

//     C2.transferAmount(500 ,C1);

// }




// 2. Car Class:
// Challenge: Create a Car class that simulates the behavior of a vehicle.
// Attributes:
// model: String representing the car model name.
// year: Integer indicating the car's manufacturing year.
// fuelLevel: Double representing the remaining fuel quantity (percentage or liters).
// speed: Integer representing the current speed in kilometers per hour.
// isRunning: Boolean indicating whether the car is currently running.
// Methods:
// startEngine(): Sets isRunning to true and prints a starting message.
// stopEngine(): Sets isRunning to false and prints a stopping message.
// accelerate(amount): Increases the car's speed by the specified amount (check engine state and fuel level).
// brake(amount): Decreases the car's speed by the specified amount (ensure speed doesn't become negative).
// refuel(amount): Increases the fuel level by the specified amount (check for tank capacity).
// printStatus(): Displays the car's model, speed, fuel level, and running state.

//program of a car
// read the instructions written in the main function and run your car as you want

// class Car
// {
//     string model;
//     int fuelLevel=0;
//     int year;
//     int speed=0;
//     bool isRunning=false;

//     public:

//     Car(string model , int year)
//     {
//         this->model=model;
//         this->year=year;
//     }

//     void startEngine()
//     {
//         if(fuelLevel<10)
//         {
//             cout<<"low fuel : Refuel first then start\n";
//         }
//         else{
//         isRunning=true;
//         cout<<"The Car Engine turned ON \n\n";
//         }

//     }

//     void stopEngine()
//     {
//         isRunning=false;
//         cout<<"The Car Engine turned OFF\n\n ";

//     }

//     void accelerate(int amount)
//     {
//         if(amount>200)
//         {
//             cout<<"too much speed can't accelerate\n";
//             cout<<"max speed : 200km/h \n";
//         }
//         else{
//         speed+=amount;
//         cout<<"Accelerator pressed : Current speed : "<<speed<<" km/h "<<endl<<endl;
//         }
//     }

//     void brake(int amount)
//     {
//         if(speed==0)
//         {
//             cout<<"first start the car\n";
//         }
//         else{
//         if(amount<0)
//         {
//             cout<<"Brake not applied :- amount should be greater than 0\n";
//         }
//         else if(amount>speed)
//         {
//             cout<<"Too much amount :- brake not applicable\n";
//         }

//         else{
//         if(speed>0)
//         speed-=amount;
        
//         if(amount==speed)
//         {
//            cout<<"The car has stopped\n";
//         }
//         else{
//             cout<<"Brakes applied\n";
//             cout<<"Current speed : "<<speed<<" km/h "<<endl<<endl;
//         }
//         }
//         }
//     }

//     void refuel()
//     {
//         cout<<"Current fuel : "<<fuelLevel<<" %\n";
//         int amount;
//         cout<<"How much percent to refuel";
//         cin>>amount;
        
//         if(amount<0)
//         {
//             cout<<"Invalid amount of fuel\n";
//         }

//         else if(fuelLevel+=amount >100)
//         {
//             cout<<"Too much amount , if we refuel fuel will overflow , ReEnter Amount\n";
//         }
//         else{
//             fuelLevel+=amount;
//             cout<<"Current fuel : "<<fuelLevel<<" %\n\n";
//         }
//     }

//     void printstatus()
//     {
//         cout<<"Your Car : "<<model<<endl;
//         cout<<"Manufactured in : "<<year<<endl;
//         cout<<"Current fuel level : "<<fuelLevel<<" %"<<endl;

//         if(isRunning == true)
//         {
//             cout<<"The car is running at "<<speed<<" km/h "<<endl<<endl;
//         }
//         else{
//             cout<<"The car is parked\n\n";
//         }
//     }
// };

// int main()
// {
    
//     // to start :  startEngine();
//     // to accelerate : accelerate(speed);
//     // to apply brake : brake(amount of speed to be decreased);
//     // to refuel : refuel();
//     // to stop : stopEngine();

//     // Run your car as you want

//     Car car1("name",0000); // Enter the name and year of manufacture that you want


// }


// 3. Laptop Class:
// Challenge: Design a Laptop class that represents a portable computer system.
// Attributes:
// brand: String representing the laptop brand and model.
// screenSize: Double indicating the screen size in inches.
// processor: String specifying the processor type and speed.
// ram: Integer representing the available RAM capacity in gigabytes.
// storage: Integer representing the storage capacity in gigabytes.
// batteryLevel: Double showing the remaining battery percentage.
// isOn: Boolean indicating whether the laptop is currently powered on.
// Methods:
// powerOn(): Sets isOn to true and prints a startup message.
// powerOff(): Sets isOn to false and prints a shutdown message.
// openApps(numApps): Simulates opening a specified number of applications, potentially impacting battery life.
// closeApps(numApps): Simulates closing applications, restoring battery life.
// charge(amount): Increases the battery level by the specified amount (check for maximum capacity).
// printSpecs(): Displays the laptop's brand, screen size, processor, RAM, storage, and battery level.

// program

// class Laptop
// {
//     string brand;
//     string processor;
//     double screenSize;
//     int ram;
//     int storage;
//     int batteryLevel=0;
//     bool isOn=false;
//     int apps=0;

//     public:

//     Laptop(string brand , string processor , double screen , int ram , int storage )
//     {
//         this->brand=brand;
//         this->processor=processor;
//         this->screenSize=screen;
//         this->ram=ram;
//         this->storage=storage;
//     }

//     void powerON()
//     {
//         if(batteryLevel>=1)
//         {
//         isOn=true;
//         cout<<"Your system is turned ON\n";
//         }
//         else
//         {
//             cout<<"low battery\n";
//         }

//     }

//     void powerOFF()
//     {
//         if(isOn==true)
//         {
//         isOn=false;
//         cout<<"Your system is OFF\n";
//         }
//     }

//     void openApps(int numApps)
//     {
//         if(numApps<0 || numApps>15)
//         {
//             cout<<"Invalid Number : number should be greater than 0\n";
//         }
//         else
//         {
//             apps+=numApps;
//             cout<<"Apps opened : "<<apps<<endl;

//         }
//     }

//     void closeApps(int numApps)
//     {
//         if(numApps<0 || numApps>apps)
//         {
//             cout<<"Invalid Number \n";
//         }

//         else if(numApps==apps)
//         {
//             apps-=numApps;
//             cout<<"All apps are closed\n";
//         }
//         else 
//         {
//             apps-=numApps;
//             cout<<"Apps opened : "<<apps<<endl;
//         }

//     }

//     void charge(int charging)
//     {
//         if(charging < 0)
//         {
//             cout<<"Invalid Amount of charging\n";
//         }
//         else if(batteryLevel+=charging >100)
//         {
//             cout<<"Invalid amount of charging\n";
//         }
//         else
//         {
//             batteryLevel+=charging;
//             cout<<"Battery is "<<batteryLevel<<"% charged\n";

//         }
//     }

//     void printSpecs()
//     {
//         cout<<"Your Laptop : "<<brand<<endl;
//         cout<<"Processor : "<<processor<<endl;
//         cout<<"Screen Size : "<<screenSize<<" inch"<<endl;
//         cout<<"RAM : "<<ram<<" GB"<<endl;
//         cout<<"Storage : "<<storage<<" GB"<<endl;
//         cout<<"Current battery level : "<<batteryLevel<<"%"<<endl<<endl;

//     }
// };

// int main()
// {
//     Laptop system1("HP-DESKTOP-GV291S8","Intel(R) Core(TM) i5-8365U CPU @ 1.60GHz   1.90 GHz" , 16 ,8 ,256);
//     system1.printSpecs();

//     system1.charge(65);
//     system1.powerON();
//     system1.openApps(5);
//     system1.closeApps(3);
//     system1.powerOFF();

//     system1.printSpecs();
// }