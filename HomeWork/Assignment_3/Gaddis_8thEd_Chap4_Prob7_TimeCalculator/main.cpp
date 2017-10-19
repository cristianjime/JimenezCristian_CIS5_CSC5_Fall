/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 6, 2017, 9:05 PM
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
    int num1,num2, minute = 60.0, hour = 3600.0, day = 86400.0;
   
    //Initialize Variables
   
    //Input Data/Variables
    cout<<"This program lets the user enter an amount of seconds and tells";
    cout<<" the user how many minutes, hours, or days, are within those seconds."<<endl;
    cout<<"Enter a number of seconds: "<<endl;
    cin>>num1;
    
    if(num1 < hour){
       num2 = num1 / 60;
        cout<<"The number of minutes in that many seconds is: "<<num2<<endl;
    }
    else if (num1 < day){
        num2 = num1 / 3600;
        cout<<"The number of Hours in that many seconds is: "<<num2<<endl;
    }
    else if(num1){
        num2 = num1 / 86400;
        cout<<"The number of Days in that many seconds is: "<<num2<<endl;
    }    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}