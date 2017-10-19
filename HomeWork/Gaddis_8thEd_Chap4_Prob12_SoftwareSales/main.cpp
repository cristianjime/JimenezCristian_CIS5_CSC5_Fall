/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
    int package, price, discnt, total;  
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"This program calculates the number of products sold and ";
    cout<<"computes the total cost of the purchase"<<endl;
    cout<<"Enter how many packages you have purchased: ";
    cin>>package;
    
    //Process or map the inputs to the outputs
    if(package > 0 && package < 10){
        price = package * 99;
        cout<<"Price: "<<"$"<<price<<endl;
    }
    else if(package >= 10 && package <= 19 ){
        price = package*99;  
        discnt = price * .20; 
        total = price - discnt;        
        cout<<"Price:"<<"$"<<total<<endl;        
    }
     else if(package >= 20 && package <= 49 ){
        price = package*99;  
        discnt = price * .30; 
        total = price - discnt;        
        cout<<"Price:"<<"$"<<total<<endl;        
    }
     else if(package >= 50 && package <= 99 ){
        price = package*99; 
        discnt = price * .40; 
        total = price - discnt;        
        cout<<"Price:"<<"$"<<total<<endl;        
    }
     else if(package >= 100){
        price = package*99;  
        discnt = price * .50 ;
        total = price - discnt;        
        cout<<"Price:"<<"$"<<total<<endl;        
    } 
     else 
         cout<<"No negative numbers ";
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}