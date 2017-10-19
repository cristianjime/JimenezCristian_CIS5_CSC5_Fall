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
    short int num;
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"This program converters 1 through 10 into its Roman numerical. \n";
    cout<<"\n";
    cout<<"Choose any number 1 through 10: "<<endl;
    cin>>num;
    switch(num)
    {
        case 1:cout<<"I \n";
        break;
         case 2:cout<<"II \n";
        break;
         case 3:cout<<"III \n";
        break;
         case 4:cout<<"IV \n";
        break;
         case 5:cout<<"V \n";
        break;
         case 6:cout<<"VI \n";
        break;
         case 7:cout<<"VII \n";
        break;
         case 8:cout<<"VIII \n";
        break;
         case 9:cout<<"IX \n";
        break;
         case 10:cout<<"X \n";
        break;
        default:
            cout<<"Invalid choice not 1 through 10. \n";
    }        
    //Exit the program
    return 0;
}