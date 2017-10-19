/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on September 21, 2017, 5:00 PM
 * Purpose:  Create a Program that plays a word game with the user 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Variables
string name, city, college, profess, animal, petName, age;
    
//Initialize Variables
    
//Input Data/Variables
cout << "Enter your name: ";
cin >> name;
cout << "Enter your age: ";
cin >> age;
cout << "Enter the name of a city: ";
cin >> city;
cout << "Enter the name of a college: ";
cin >> college;
cout << "Enter a profession: ";
cin >> profess;
cout << "Enter a type of an animal: ";
cin >> animal;
cout << "Enter a pet's name: ";
cin >> petName;
   
//Process or map the inputs to the outputs
    
//Display/Output all pertinent variables


cout<< "There once was a person named " << name << " who lived in " << city<<"."<<endl;
cout<< "At the age of " << age << ", " << name << " went to "<<college<<"."<<endl;
cout<< name << " graduated and went to work"<< " as a "<< profess<<"."<<endl;
cout<<"Then, " << name << " adopted a "<<animal<<" named "<<petName<<"."<<endl;
cout<<"They, both lived happily ever after! \n";

//Exit the program
    return 0;
}