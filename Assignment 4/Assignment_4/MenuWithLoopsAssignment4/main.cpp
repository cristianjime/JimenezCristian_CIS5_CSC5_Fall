/* 
 * File:   main.cpp
 * Author: Cristian Jimenez 
 * Created on October 19, 2017, 9:35 AM
 * Purpose:  Menu with Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
float OCNLVL=0;     //Ocean Level Rising per year(millimeter)
float YEARFEE=2500;     //Yearly Membership Fee
const float FEE=.04;       //Percentage of Fee increase
//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
        //Input Data/Variables
        menu();
        cin>>choice;
        //Input Data/Variables
         switch(choice){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            default:{
                cout<<"Invalid Entry"<<endl;
            }
        }
    }while(choice>0&&choice<10);
    
    //Exit the program
    return 0;
}
    
void prob1(){ 
     cout<<"You are in Problem 1"<<endl;
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


}
 
void prob2(){
     cout<<"You are in Problem 2"<<endl;
     //Declare Variables
    unsigned short int x=0,row,colom;
    //Initialize Variables

    //Input Data/Variables
    cout<<"This program will display an equal sided square from 1-15"<<endl;
    cout<<"Enter a number from 1-15: "<<endl;
    cin>>x;
    //Process or map the inputs to the outputs

    //Display/Output all pertinent variables
    for(row=1;row<=x;row++){
        for(colom=1;colom<=x;colom++){
            cout<<"X";
        }
        cout<<endl; 
    }
}    
void prob3(){
    cout<<"You are in Problem 3"<<endl;
    //Declare Variables
    float fahren,celsius;

    //Initialize Variables


    //Input Data/Variables

    //Process or map the inputs to the outputs
    cout<<"This program will show a table of Celsius from 1-20 and ";
    cout<<" also show the temperature for Fahrenheit"<<endl;

    cout<<"Celsius     Fahrenheit\n";
    cout<<"------------------------------------"<<endl;
    for(celsius=0;celsius<=20;celsius++){
         //Display/Output all pertinent variables
    fahren=(1.8*celsius)+32;
    cout<<"Celsius = "<<celsius<<" Fahrenheit = "<<fahren<<endl;

    }
} 
void prob4(){
    cout<<"You are in Problem 4"<<endl;
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
}
void prob5(){
    cout<<"You are in Problem 5"<<endl;
    //Declare Variables
    int year;
    float total;
    //Initialize Variables

    //Input Data/Variables
    cout<<"This program will show a table of the rising ocean level for";
    cout<<" the next 25 years"<<endl;

    //Process or map the inputs to the outputs

    //Display/Output all pertinent variables
    cout<<"Year     Sea Level Rising\n";
    cout<<"------------------------------------"<<endl;
    for(year=1; year<=25;year++){
        OCNLVL=(OCNLVL+1.5);

        cout<<"Year "<<year<<" Rising "<<OCNLVL<<" Millimeters"<<endl;
    }
}
void prob6(){
    cout<<"You are in Problem 6"<<endl;
    //Declare Variables
    unsigned short int min;
    float calories;
    //Initialize Variables

    //Input Data/Variables

    //Process or map the inputs to the outputs

    //Display/Output all pertinent variables
    cout<<"This program shows the calories burned while ";
    cout<<"running on a treadmill in 5 minutes intervals up to 30 minutes"<<endl;

    for(min=5;min<=30;min+=5){
        calories=min*3.6;
        cout<<"In "<<min<<" Min you have burned "<<calories<<" calories."<<endl;
    }
    
}
void prob7(){
    cout<<"You are in Problem 7"<<endl;
    //Declare Variables
    int year;

    //Initialize Variables

    //Input Data/Variables
    cout<<"This program will show the projected rates for the next six years";
    cout<<" of the yearly Membership Fee."<<endl;

    //Process or map the inputs to the outputs
    cout<<"Year     Fee\n";
    cout<<"------------------------------------"<<endl;
    //Display/Output all pertinent variables
    for(year=1; year<=6;year++){
        YEARFEE=(YEARFEE*FEE)+YEARFEE;

        cout<<"Year "<<year<<" Fee "<<YEARFEE<<endl;
    } 
}
void prob8(){
    cout<<"You are in Problem 8"<<endl;
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
}
void prob9(){
    cout<<"You are in problem 9"<<endl;
    //Declare Variables
    short unsigned int row,colom;
    //Initialize Variables

    //Display/Output
    cout<<"This program displays two patterns A and B"<<endl;
    cout<<"Pattern A:"<<endl;
    cout<<"-----------"<<endl;
    for(row=0;row<11;row++){
        for(colom=0;colom<row;colom++){
            cout<<"+";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Pattern B: "<<endl;
    cout<<"-----------"<<endl;
    for(row=10;row>0;row--){
        for(colom=0;colom<row;colom++){
            cout<<"+";
        }
        cout<<endl;
    }
}
void menu(){
    //Input Data/Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem 1 Pennies For Pay"<<endl;
    cout<<"2. Problem 2 Square Display"<<endl;
    cout<<"3. Problem 3 Celsius to Fahrenheit Table"<<endl;
    cout<<"4. Problem 4 Sum of Numbers"<<endl;
    cout<<"5. Problem 5 Ocean Levels"<<endl;
    cout<<"6. Problem 6 Calories Burned"<<endl;
    cout<<"7. Problem 7 Membership Fee Increase"<<endl;
    cout<<"8. Problem 8 Sum of Numbers"<<endl;
    cout<<"9. Problem 9 Pattern Display"<<endl;
}