// Nikhil 
// 23070123093
// experiment 11
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