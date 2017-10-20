/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 18, 2017, 9:05 AM
 * Purpose:  Create a program that makes an equal sided square 
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
    unsigned short int x=0,row,colom;
    //Initialize Variables
        
    //Input Data/Variables
    cout<<"This program will display an equal sided square from 1-15"<<endl;
    cout<<"Enter a number from 1-15: "<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    for(row=1;row<=x;row++){
        for(colom=1;colom<=x;colom++){
            cout<<"X";
        }
        cout<<endl;
    }
    //Exit the program
    return 0;
}