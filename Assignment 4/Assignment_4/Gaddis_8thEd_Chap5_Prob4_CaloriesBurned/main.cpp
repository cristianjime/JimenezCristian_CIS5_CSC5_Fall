/* 
 * File:   main.cpp
 * Author: Cristian JImenez
 * Created on October 18, 2017, 12:05 AM
 * Purpose:  Create a program that shows the calories burned from running
 *           on a treadmill in 5 minutes intervals 
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
    unsigned short int min;
    float calories;
    //Initialize Variables
    
    //Input Data/Variables

    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"This program shows the calories burned while ";
    cout<<"running on a treadmill in 5 minutes intervals up to 30 minutes"<<endl;
    
    for(min=5;min<=30;min+=5){
        calories=min*3.6;
        cout<<"In "<<min<<" Min you have burned "<<calories<<" calories."<<endl;
    }
    
    //Exit the program
    return 0;
}