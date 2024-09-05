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