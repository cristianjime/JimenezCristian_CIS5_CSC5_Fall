/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 18, 2017, 9:05 AM
 * Purpose:  Create a program that doubles the salary of the user 
 *           for the amount of days his worked
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
    int numDay=1,day;
    float money=1.0, total=0, dayPay=0;
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"This program will ask the user how many days they have worked,";
    cout<<" then it will show a table that doubles every day starting";
    cout<<" with 1 penny."<<endl;
    cout<<"How many days worked: "<<endl;
    cin>>numDay;
    //Process or map the inputs to the outputs
    while(numDay<1){
        cout<<"Invalid Entry"<<endl;
        cin>>numDay;
    }
    for(day=1;day<=numDay;day++){
        dayPay=money/100;
        cout<<"Day "<<day<<" you earned $ "<<dayPay<<endl;
        total+=dayPay;
        money*=2;
    }
    cout<<"Total earnings are $"<<total<<endl;
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}