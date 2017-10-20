/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 18, 2017, 9:05 AM
 * Purpose:  Create a program that displays two patterns
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
    short unsigned int row,colom;
    //Initialize Variables
    
    //Display/Output
    cout<<"This program displays two patterns A and B"<<endl;
    cout<<"Pattern A:"<<endl;
    cout<<"-----------"<<endl;
    for(row=0;row<11;row++){
        for(colom=0;colom<row;colom++){
            cout<<"+";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Pattern B: "<<endl;
    cout<<"-----------"<<endl;
    for(row=10;row>0;row--){
        for(colom=0;colom<row;colom++){
            cout<<"+";
        }
        cout<<endl;
    }
   
    //Exit the program
    return 0;
}