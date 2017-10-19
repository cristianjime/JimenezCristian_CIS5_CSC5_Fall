/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on September 22, 2017, 11:42 PM
 * Purpose:  Create a Program that calculates the number of male or females in a class
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
    float male, female, totClas, percM, percF;
    
    
    //Initialize Variables
    
 
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"How many males are in the class"<<endl;
    cin>>male;
    cout<<"How many females are in the class"<<endl;
    cin>>female;
    
    totClas =(male+ female);
    percM =(male/totClas)*100;
    percF =(female/totClas)*100; 
    
    cout<<"The Percentage of Males in the class is "<<percM<<"%"<<endl;
    cout<<"The Percentage of Females in the class is "<<percF<<"%"<<endl;
   
    //Exit the program
    return 0;
}
