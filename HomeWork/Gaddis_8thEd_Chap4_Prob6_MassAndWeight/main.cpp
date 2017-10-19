/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 5, 2017, 9:05 PM
 * Purpose:  Create a program that calculates an objects mass and 
 * displays it weight in newton
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
   int  mass;   //mass in kilograms
    //Initialize Variables

    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"This program calculates an objects mass and display it weight";
    cout<<"\n"<<endl;
    cout<<"What is the object's mass: ";
    cin>>mass;
    float newtons=static_cast<float>(mass * 9.8);
    cout<<"The object weight in newton is: "<<newtons<<endl;
            
    //Display/Output all pertinent variables
     if (newtons < 10)
        cout<<"The object is too light.\n";
     else if (newtons >1000)
        cout<<"The object is too heavy .\n";
    //Exit the program
    return 0;
}