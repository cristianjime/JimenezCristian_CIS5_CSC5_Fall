/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on Sept 25th, 2017, 9:05 PM
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
    float length1,width1, length2, width2, area1, area2, aa, bb,cc;
    
    //Initialize Variables
       
    //Input Data/Variables
    
    
    //Process or map the inputs to the outputs
    cout<<"Rectangle 1: "<<endl;
    cout<<"Length: ";
    cin>>length1;
    cout<<"Width: ";
    cin>>width1;
   
    area1 = (length1 * width1);
    cout<<"Area: "<<area1<<endl;
    
    cout<<"Rectangle 2: "<<endl;
    cout<<"Length: ";
    cin>>length2;
    cout<<"Width: ";
    cin>>width2;
    
    area2 = (length2 * width2);
    cout<<"Area: "<<area2<<endl;
        
    //Display/Output all pertinent variables
    if (area1 > area2)
        cout<<"Area of rectangle 1 is greater than rectangle 2."; 
    else if (area2 > area1)
        cout<<"Area of rectangle 2 is greater than rectangle 1. ";
    else if (area1 == area2)
        cout<<"Area of rectangle 1 is the same as rectangle 2.";       
    //Exit the program
                
    
    return 0;
}

