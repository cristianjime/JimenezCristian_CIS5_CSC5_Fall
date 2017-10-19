/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on Sept 25th, 2017, 9:05 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short int month, day, year, magic;
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"This program multiples the month and day together and if it ";
    cout<<"equals the last two digits of that year it is considered a magical date \n";
    cout<<"\n";
    cout<<"Enter the number of the Month: ";
    cin>>month;
    cout<<"Enter the number of the Day: ";
    cin>>day;
    cout<<"Enter the last two digits of the Year: ";
    cin>>year;
    
    magic = month * day;
    //Display/Output all pertinent variables
    if(magic == year)
    cout<<"This date is magic"<<endl;
    else
    cout<<"This date is not magic"<<endl;
    
    
    //Exit the program
    return 0;
}

