/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on October 19, 2017, 9:05 AM
 * Purpose:  Create a program that shows a table of how far of a distance
 *         the vehicle has taken them by giving the speed and hours of the trip
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
    int speed,time,distanc;
    int a;
   
    //Input Data/Variables
    cout<<"This program will calculate the distance traveled after the user";
    cout<<" inputs his"<<endl;
    cout<<"information then show the distance the user traveled for each hour"<<endl;
    cout<<"What is the speed of the vehicle in mph: "<<endl;
    cin>>speed;
    cout<<"How many hours have you traveled: "<<endl;
    cin>>time;
    
    //Display/Output all pertinent variables
    if(time>=0&&distanc>0){
    distanc=speed*time;        
    //Process or map the inputs to the outputs
    cout<<"Hour     Distance Traveled\n";
    cout<<"------------------------------------"<<endl;
        for(a=1;a<=time;a++){
        distanc=speed*a;
        cout<<a<<"            "<<distanc<<endl;
        }
    }
    else
        cout<<"Invalid Entry"<<endl;
    //Exit the program
    return 0;
}