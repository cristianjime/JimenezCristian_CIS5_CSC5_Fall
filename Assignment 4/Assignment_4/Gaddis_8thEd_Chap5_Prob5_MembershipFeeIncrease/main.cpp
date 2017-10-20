/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 19, 2017, 9:05 AM
 * Purpose:  Create a program that calculates the yearly membership fee
 *          for the next six years
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
float YEARFEE=2500;     //Yearly Membership Fee
const float FEE=.04;       //Percentage of Fee increase
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int year;
    
    //Initialize Variables
   
    //Input Data/Variables
    cout<<"This program will show the projected rates for the next six years";
    cout<<" of the yearly Membership Fee."<<endl;
    
    //Process or map the inputs to the outputs
    cout<<"Year     Fee\n";
    cout<<"------------------------------------"<<endl;
    //Display/Output all pertinent variables
    for(year=1; year<=6;year++){
        YEARFEE=(YEARFEE*FEE)+YEARFEE;
       
        cout<<"Year "<<year<<" Fee "<<YEARFEE<<endl;
    }
        
    //Exit the program
    return 0;
}