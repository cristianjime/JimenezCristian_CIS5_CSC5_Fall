/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 18, 2017, 9:05 AM
 * Purpose:  Create a program that calculates the rise of the 
 *           sea level for the next 25 years
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
float OCNLVL=0;     //Ocean Level Rising per year(millimeter)
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int year;
    float total;
    //Initialize Variables
   
    //Input Data/Variables
    cout<<"This program will show a table of the rising ocean level for";
    cout<<" the next 25 years"<<endl;
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Year     Sea Level Rising\n";
    cout<<"------------------------------------"<<endl;
    for(year=1; year<=25;year++){
        OCNLVL=(OCNLVL+1.5);
       
        cout<<"Year "<<year<<" Rising "<<OCNLVL<<" Millimeters"<<endl;
    }
        
    //Exit the program
    return 0;
}