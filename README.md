# Experiment 11
To learn about object oriented programing using class and methods.

## Software Used
VS Code

## Problem Statements

1.) Write a c++ program to show car details using class.

2.) Write a c++ program to make a class by using function.

3.) Write a c++ program to calculate are of rectangle using class.

4.) Write a c++ program to make a class by taking inputs from user.

## Theory
Object-oriented programming – As the name suggests uses objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc. in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

Class- A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.

Class methods – also known as member functions – are functions defined inside a class that operates on the class objects. They access the class's data members and other member functions and define the behavior or actions that objects of the class can perform.

## Program Codes:

```javascript
// Nikhil
// 23070123093
// experiment 11a
#include <iostream>
using namespace std;
class Bike{
    public:
    string make = "Honda";
    string model = "CBR";
      int year = 2024;
      void displayInfo(){
     cout<<"Bike Details: "<<make<<""<<model<<"("<<year<<")"<<endl;   
      }
};
int main(){
Bike myBike;
myBike.displayInfo();
return 0;
                 
}
```
```javascript

// Nikhil
// 23070123093
// experiment 11b
#include<iostream>
using namespace std;
class Car{
  public:
  string manu;
  string model;
  int year;
  void userInput(){
  cout<<"Enter Car manufacturer- "<<endl;
  cin>>manu;

cout<< "Enter Car model- "<<endl;
cin>>model;

cout<<"Enter Car manufacturing year- "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<manu<<" "<< model<< " "<<"("<<year<<")"<<endl;

}

};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
```
```javascript
// Nikhil
// 23070123093
// experiment 11c
#include<iostream>
using namespace std;
class Band{
public:
string title = "Arctic Monkeys";
string genre = "Rock";
string country = "England";
int year = 2004;
    
void displayInfo()
{
cout<< "Band details:- "<<endl;
cout<<"Title: "<<title <<endl; 
cout <<"Genre: "<< genre<<endl;
cout <<"Origin: "<< country<<endl;
cout <<"Established: "<<year<<endl;
}
};
    int main()
    {
        Band myBand;
        myBand.displayInfo();
        return 0;
    }
```
```javascript
// Nikhil 
// 23070123093
// experiment 11d
#include<iostream>
using namespace std;
class Rectangle{
private:
double length;
double width;

public:
void setDimensions(double leng,double widt)
{
  length = leng;
  width = widt;
}
double calculateArea()
{
return length*width;
}
};
int main() {
Rectangle rect;
rect.setDimensions(3.0, 8.0);
cout<< "Area: "<<rect.calculateArea()<<endl;
return 0;
}
```

## Outputs:

1. BIKE DETAILS

![Screenshot 2024-09-05 184131](https://github.com/user-attachments/assets/bd8c6777-7af8-4ba0-8f1a-cacdb64b9367)

2. CLASS BY FUNCTION
 
![Screenshot 2024-09-05 181549](https://github.com/user-attachments/assets/bffa95a0-e62a-4e6c-be2a-68b30b3ca4e4)

3. AREA OF RECTANGLE

![Screenshot 2024-09-05 181725](https://github.com/user-attachments/assets/729a289d-921d-4117-a2b6-ae176417cdf6)

4. USER CLASS

![Screenshot 2024-09-05 181951](https://github.com/user-attachments/assets/acdc5f9c-bf9b-4eec-886d-454bddc023e8)

## Conclusion:

We learnt to declare class.

We learnt to create a class by taking inputs from user.

We learnt to make a class by function.


