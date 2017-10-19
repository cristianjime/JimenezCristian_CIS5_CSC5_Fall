/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on September 24, 2017, 1:00 PM
 * Purpose:  Create a Program that calculates the average test score of 5 test
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variables
    float test1, test2, test3, test4, test5, totAvg;
    
    //Initialize Variables
    
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Score Test 1: ";
    cin>>test1;
    cout<<"Score Test 2: ";
    cin>>test2;
    cout<<"Score Test 3: ";
    cin>>test3;
    cout<<"Score Test 4: ";
    cin>>test4;
    cout<<"Score Test 5: ";
    cin>>test5;
   
    totAvg = (test1 + test2 + test3 + test4 + test5) /5;
   
    cout<<setprecision(1)<<fixed;
    cout<<"The Total Average of all your test is: "<<totAvg<<endl;
    
    //Exit the program
    return 0;
}