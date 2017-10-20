/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 17, 2017, 11:05 AM
 * Purpose:  Create a program that adds the sum off all the numbers in the 
 *          integer chosen by the user
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
   int num1=0, num2=1, sum=0;
   
    //Input Data/Variables
    cout<<"This program ask the user for a positive integer,";
    cout<<" then will add all the numbers from 1 to the integer chosen ";
    cout<<"and give the sum."<<endl;
   cout<<"Enter a positive number to sum: "<<endl;
   cin>>num1;
   
   while(num1<0){
       cout<<"Positive numbers only"<<endl;
       cin>>num1;
   }
   
   for(num2=1;num2<=num1;num2++){
       sum+=num2;
   }
   cout<<"total = "<<sum<<endl;

    //Exit the program
        
        
    return 0;
}
    