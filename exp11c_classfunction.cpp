// Nikhil
// 23070123093
// experiment 11
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