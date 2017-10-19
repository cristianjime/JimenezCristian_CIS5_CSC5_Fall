/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on September 23, 2017, 11:42 PM
 * Purpose:  Create a Program that can add 2 random numbers
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
    int num1, num2, num3, total;
    
    //Initialize Variables
     
            
    //Input Data/Variables
    cout<<"Add two random numbers\n";
    cout<<"\n";
    cout<<"First Number: " ;
    cin>> num1;
    cout<<"Second Number: ";
    cin>> num2;
    cout<<"Enter your answer:";
    cin>> num3;
    total = (num1 + num2);
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    if(total == num3)
        cout<<"Congratulations the answer is correct";
    else
        cout<<"Wrong answer. The correct Answer is: "<<total<<endl;
    //Exit the program
    return 0;
}