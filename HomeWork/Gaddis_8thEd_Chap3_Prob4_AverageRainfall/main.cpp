/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on August 31, 2017, 4:10 PM
 * Purpose:  Create a Program that calculates the average rainfall for three months 
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
    string      month1, month2, month3;
    float rainfa1, rainfa2,rainfa3, avgRain;
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<< "Enter three consecutive months: "<<endl;
    cin >> month1 >> month2 >> month3;

    cout<<"How much inches of rain fell in "<< month1<<"?"<<endl;
    cin>>rainfa1;

    cout<<"How much inches of rain fell in "<<month2<<"?"<<endl;
    cin>>rainfa2;
    
    cout<<"How much inches of rain fell in "<<month3<<"?"<<endl;
    cin>>rainfa3;
    avgRain= (rainfa1 + rainfa2 + rainfa3) / 3;
    
    cout<<"The average Rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is "<<avgRain<<"inches"<<endl;
    
    //Exit the program
    return 0;
}