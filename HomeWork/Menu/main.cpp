/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on Oct 6th, 2017, 9:35 AM
 * Purpose:  Menu without Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Input Data/Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem 1: Gaddis 8thEd Chap4 Prob3 Magic Dates"<<endl;
    cout<<"2. Problem 2: Gaddis 8thEd Chap4 Prob2 Roman Numeral Converter"<<endl;
    cout<<"3. Problem 3: Gaddis 8thEd Chap4 Prob11 Math Tutor"<<endl;
    cout<<"4. Problem 4: Gaddis 8thEd Chap4 Prob5 BMI"<<endl;
    cout<<"5. Problem 5: Gaddis 8thEd Chap4 Prob4 Area of Rectangle"<<endl;
    cout<<"6. Problem 6: Gaddis 8thEd Chap4 Prob6 Mass and Weight "<<endl;
    cout<<"7. Problem 7: Gaddis 8thEd Chap4 Prob12 Software Sales"<<endl;
    cout<<"8. Problem 8: Gaddis 8thEd Chap4 Prob25 Mobile Sale Provider"<<endl;
    cout<<"9. Problem 9: Gaddis 8thEd Chap4 Prob7 Time Calculator"<<endl;
    cin>>choice;
    
    //Process or map the inputs to the outputs
    switch(choice){
        case 1:{
            cout<<"You are in Problem 1"<<endl;
                        //Declare Variables
            short int month, day, year, magic;

            //Initialize Variables

            //Input Data/Variables

            //Process or map the inputs to the outputs
            cout<<"This program multiples the month and day together and if it ";
            cout<<"equals the last two digits of that year, it is considered a magical date. \n";
            cout<<"\n";
            cout<<"Enter the number of the Month: ";
            cin>>month;
            cout<<"Enter the number of the Day: ";
            cin>>day;
            cout<<"Enter the last two digits of the Year: ";
            cin>>year;

            magic = month * day;
            //Display/Output all pertinent variables
            if(magic == year)
            cout<<"This date is magic"<<endl;
            else
            cout<<"This date is not magic"<<endl;


            //Exit the program
                   return 0;
            break;
        }
        case 2:{
            cout<<"You are in Problem 2"<<endl;
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
            break;
        }
        case 3:{
            cout<<"You are in Problem 3"<<endl;
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
        case 4:{
            cout<<"You are in Problem 4"<<endl;
            //Declare Variables
            int weight,height;

            //Initialize Variables
            cout<<"This program tells the user his BMI"<<endl;
            cout<<"\n";
            cout<<"What is your weight in pounds: ";
            cin>>weight;
            cout<<"What is your height in inches: ";
            cin>>height;
            cout<<setprecision(2)<<fixed;
            float bmi=static_cast<float>(weight * 703) / (height * height);

            //Input Data/Variables

            //Process or map the inputs to the outputs

            //Display/Output all pertinent variables
             cout<<"Your BMI is: "<<bmi<<endl; 

            if (bmi < 18.5)
                cout<<"Your BMI is underweight.\n";
            else if (bmi >= 18.5 && bmi < 25)
                cout<<"You are in optimal shape.\n";
            else if (bmi >= 25)
                cout<<"Your BMI is overweight.\n";

            //Exit the program
            return 0;
            break;
        }
        case 5:{
            cout<<"You are in Problem 5"<<endl;
            //Declare Variables
            int length1,width1, length2, width2, area1, area2;

            //Initialize Variables

            //Input Data/Variables


            //Process or map the inputs to the outputs
            cout<<"This program lets the user put the length and width off two rectangles";
            cout<<" and tells them which one has the bigger are or if they are the same"<<endl;
            cout<<"\n";
            cout<<"Rectangle 1: "<<endl;
            cout<<"Length: ";
            cin>>length1;
            cout<<"Width: ";
            cin>>width1;

            area1 = (length1 * width1);
            cout<<"Area: "<<area1<<endl;

            cout<<"Rectangle 2: "<<endl;
            cout<<"Length: ";
            cin>>length2;
            cout<<"Width: ";
            cin>>width2;

            area2 = (length2 * width2);
            cout<<"Area: "<<area2<<endl;

            //Display/Output all pertinent variables
            if (area1 > area2)
                cout<<"Area of rectangle 1 is greater than rectangle 2."; 
            else if (area2 > area1)
                cout<<"Area of rectangle 2 is greater than rectangle 1. ";
            else if (area1 == area2)
                cout<<"Area of rectangle 1 is the same as rectangle 2.";       
            //Exit the program
            return 0;
            break;
        }
        case 6:{
            cout<<"You are in Problem 6"<<endl;
            //Declare Variables
            int  mass;   //mass in kilograms
            //Initialize Variables

            //Input Data/Variables

            //Process or map the inputs to the outputs
            cout<<"This program calculates an objects mass and display it weight";
            cout<<"\n"<<endl;
            cout<<"What is the object's mass: ";
            cin>>mass;
            float newtons=static_cast<float>(mass * 9.8);
            cout<<"The object weight in newton is: "<<newtons<<endl;

            //Display/Output all pertinent variables
             if (newtons < 10)
                cout<<"The object is too light.\n";
             else if (newtons >1000)
                cout<<"The object is too heavy .\n";
            //Exit the program
            return 0;
            break;
        }
        case 7:{
            cout<<"You are in Problem 7"<<endl;
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
            break;
        }
        case 8:{
            cout<<"You are in Problem 8"<<endl;
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
            break;
        }
        case 9:{
            cout<<"You are in Problem 9"<<endl;
            //Declare Variables
            int num1,num2, minute = 60.0, hour = 3600.0, day = 86400.0;

            //Initialize Variables

            //Input Data/Variables
            cout<<"This program lets the user enter an amount of seconds and tells";
            cout<<" the user how many minutes, hours, or days, are within those seconds."<<endl;
            cout<<"Enter a number of seconds: "<<endl;
            cin>>num1;

            if(num1 < hour){
               num2 = num1 / 60;
                cout<<"The number of minutes in that many seconds is: "<<num2<<endl;
            }
            else if (num1 < day){
                num2 = num1 / 3600;
                cout<<"The number of Hours in that many seconds is: "<<num2<<endl;
            }
            else if(num1){
                num2 = num1 / 86400;
                cout<<"The number of Days in that many seconds is: "<<num2<<endl;
            }    
            //Process or map the inputs to the outputs

            //Display/Output all pertinent variables

            //Exit the program
            return 0;
            break;
        }
        default:{
            cout<<"Invalid Entry. "<<endl;
        }
    }
    
    //Exit the program
    return 0;
}