/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 1, 2017, 9:05 AM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include<iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int weight,height;
    
    //Initialize Variables
    cout<<"What is your weight in pounds: ";
    cin>>weight;
    cout<<"What is your height in inches: ";
    cin>>height;
    cout<<setprecision(2)<<fixed;
    float bmi=static_cast<float>(weight * 703) / (height * height);
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
     cout<<"Your BMI is: "<<bmi<<endl; 
    
    if (bmi < 18.5)
        cout<<"Your BMI is underweight.\n";
    else if (bmi >= 18.5 && bmi < 25)
        cout<<"You are in optimal shape.\n";
    else if (bmi >= 25)
        cout<<"Your BMI is overweight.\n";
    else 
        cout<<"Invalid Entry.\n";
    //Exit the program
    return 0;
}

