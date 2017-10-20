/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on September 22, 2017, 11:42 PM
 * Purpose:  Create a program that shows a table from 1-20 in Celsius 
 *           and Fahrenheit
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main()
{
    //Declare Variables
    float fahren,celsius;
    
    //Initialize Variables
   
   
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"This program will show a table of Celsius from 1-20 and ";
    cout<<" also show the temperature for Fahrenheit"<<endl;
   
    cout<<"Celsius     Fahrenheit\n";
    cout<<"------------------------------------"<<endl;
    for(celsius=0;celsius<=20;celsius++){
         //Display/Output all pertinent variables
    fahren=(1.8*celsius)+32;
    cout<<"Celsius = "<<celsius<<" Fahrenheit = "<<fahren<<endl;

    }
   
   
    //Exit the program
    return 0;
}