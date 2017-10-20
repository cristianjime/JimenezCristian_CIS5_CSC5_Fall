/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 4th, 2017, 9:35 AM
 * Purpose:  Menu withLoops
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
    int choice;
    
    //Loop the Menu and Problems
    do{
    
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cin>>choice;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
                cout<<"Addition"<<endl;
                //Declare Variables
                int num1, num2, num3, total;            
                //Input Data/Variables
                cout<<"This program lets the user add two random numbers,"; 
                cout<<" then allows them to check if the answer is right"<<endl;
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
                break;
            }
            case 2:{
                cout<<"Subtraction"<<endl;
                //Declare Variables
                int num1, num2, num3, total;            
                //Input Data/Variables
                cout<<"This program lets the user subtract two random numbers,"; 
                cout<<" then allows them to check if the answer is right"<<endl;
                cout<<"First Number: " ;
                cin>> num1;
                cout<<"Second Number: ";
                cin>> num2;
                cout<<"Enter your answer:";
                cin>> num3;
                total = (num1 - num2);
                //Process or map the inputs to the outputs

                //Display/Output all pertinent variables
                if(total == num3)
                    cout<<"Congratulations the answer is correct";
                else
                    cout<<"Wrong answer. The correct Answer is: "<<total<<endl;
                //Exit the program
                return 0;
                break;
            }
            case 3:{
                cout<<"Multiplication"<<endl;
                 //Declare Variables
                int num1, num2, num3, total;            
                //Input Data/Variables
                cout<<"This program lets the user multiply two random numbers,"; 
                cout<<" then allows them to check if the answer is right"<<endl;
                cout<<"First Number: " ;
                cin>> num1;
                cout<<"Second Number: ";
                cin>> num2;
                cout<<"Enter your answer:";
                cin>> num3;
                total = (num1 * num2);
                //Process or map the inputs to the outputs

                //Display/Output all pertinent variables
                if(total == num3)
                    cout<<"Congratulations the answer is correct";
                else
                    cout<<"Wrong answer. The correct Answer is: "<<total<<endl;
                //Exit the program
                return 0;
                break;
            }
            case 4:{
                cout<<"Division"<<endl;
                 //Declare Variables
                int num1, num2, num3, total;            
                //Input Data/Variables
                cout<<"This program lets the user divide two random numbers,"; 
                cout<<" then allows them to check if the answer is right"<<endl;
                cout<<"First Number: " ;
                cin>> num1;
                cout<<"Second Number: ";
                cin>> num2;
                cout<<"Enter your answer:";
                cin>> num3;
                total = (num1 / num2);
                //Process or map the inputs to the outputs

                //Display/Output all pertinent variables
                if(total == num3)
                    cout<<"Congratulations the answer is correct";
                else
                    cout<<"Wrong answer. The correct Answer is: "<<total<<endl;
                //Exit the program
                return 0;
                break;
            }
            default:{
                cout<<"Invalid Entry "<<endl;
            }
        }
    }while(choice>=0||choice<0);
    //Exit the program
    return 0;
}