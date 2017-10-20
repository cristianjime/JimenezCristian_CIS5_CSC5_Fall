/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 7, 2017, 9:05 PM
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
    int books;
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"How many books purchased this month:";
    cin>>books;
    if(books == 0)
        cout<<"You have earned 0 points"<<endl;
    else if(books == 1)        
        cout<<"You have earned 5 points"<<endl;
    else if(books == 2)        
        cout<<"You have earned 15 points"<<endl;
    else if(books == 3)        
        cout<<"You have earned 30 points"<<endl;
    else if(books >= 4)        
        cout<<"You have earned 60 points"<<endl;
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}