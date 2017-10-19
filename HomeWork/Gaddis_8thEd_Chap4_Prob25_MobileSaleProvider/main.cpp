/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 4th, 2017, 9:35 AM
 * Purpose:  Menu without Loops
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
    int minute, over, total, choice;
    
    //Input Data/Variables
    cout<<"Choose your package"<<endl;
    cout<<"1: Package A"<<endl;
    cout<<"2. Package B"<<endl;
    cout<<"3. Package C"<<endl;
    cin>>choice;
    
    //Process or map the inputs to the outputs
    switch(choice){
        case 1:{
            cout<<"How many minutes have you used"<<endl;
            cin>>minute;
            if (minute <= 450 ){
            cout<<"Total fee $39.99"<<endl;
            }
            else if (minute > 450){
            over = minute - 450;
            total = over + 39.99;
            }
            break;
        }
        case 2:{
            cout<<"You are in Problem 2"<<endl;
            break;
        }
        case 3:{
            cout<<"You are in Problem 3"<<endl;
            break;
        }
        default:{
            cout<<"You seem to have problems with instructions"<<endl;
            cout<<"You are unworthy of running this code"<<endl;
        }
    }
    
    //Exit the program
    return 0;
}