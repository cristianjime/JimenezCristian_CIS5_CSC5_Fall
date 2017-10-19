/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on September 24, 2017, 10:00 AM
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
    //Variables
    float loanPay, insuran, gas, oil, tires, maintan, totMont, totYear;
    
    //Initialize Variables
    
            
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
   
    cout<<"Loan Pay: ";
    cin>>loanPay;
    cout<<"Insurance Cost: ";
    cin>>insuran;
    cout<<"Gas Cost: ";
    cin>>gas;
    cout<<"Oil Cost:";
    cin>>oil;
    cout<<"Tires Cost: ";
    cin>>tires;
    cout<<"Maintenance Cost: ";
    cin>>maintan;
   
    totMont = (loanPay + insuran + gas +oil + tires + maintan);
    totYear = totMont *12;
   
    cout<<"Monthly Cost: "<<totMont<<endl;
    cout<<"Yearly Cost: "<<totYear;
    //Exit the program
    return 0;
}