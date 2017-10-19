/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on September 23, 2017, 11:42 PM
 * Purpose: Create a Program that calculates a car's gas mileage
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variables
    float     nGaPeCr,  //Number of gallons of gas the car can hold
              nMilDri,  //Number of miles it can be driven on a full tank
              mDrPeGa;  //Number of miles that may be driven per gallon of gas
    
    //Initialize Variables
    
    //Input Data/Variables
    
    
    //Process or map the inputs to the outputs
   
    //Display/Output all pertinent variables
    cout << "How many gallons of gas can your car hold = "<<endl;
    cin>>nGaPeCr;
    cout << "How many miles can it be driven on a full tank of gas = "<<endl;
    cin>>nMilDri;
    
    mDrPeGa = (nMilDri / nGaPeCr);
    
    cout << "Total = "<<mDrPeGa<<" mpg"<<endl;
    
   
    //Exit the program
    return 0;
}