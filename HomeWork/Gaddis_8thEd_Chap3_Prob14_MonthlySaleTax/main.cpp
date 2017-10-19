/* 
 * File:   main.cpp
 * Author: Cristian Jimenez
 * Created on September 23, 2017, 11:42 PM
 * Purpose:  Create a Program that calculates the monthly sale tax
 */

//System Libraries
#include <iostream>             //Input/Output Stream Library
#include <iomanip>         
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string month;
    short int year;
    float totCol;                                     //Total Collected
    float stateTx = .04, cntyTx = 0.02, sales;        //County Tax
    float stTxTot, ctyTxTt, totTax;                   //Sate Tax Total, City Tax Total, and Total Tax
    //Initialize Variable
    
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout << "Enter Month: ";
    cin>>month;
    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter total amount collected at cash register: $";
    cin >> totCol;
    
    sales = totCol/1.06;
    stTxTot = sales * stateTx;
    ctyTxTt = sales * cntyTx;
    totTax = stTxTot + ctyTxTt;
    
    cout<<"-----------------"<<endl;
    cout<<"Month:"<<month<<endl;
    cout<<"Year:"<<year<<endl;
    cout<<"-----------------"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Total Collected:"<<"  $"<<setw(9)<<totCol<<endl;
    cout<<"Sales:"<<"            $"<<setw(9)<<sales<<endl;  
    cout<<"County Sales Tax:"<<" $"<<setw(9)<<ctyTxTt<<endl;
    cout<<"State Sales Tax:"<<"  $"<<setw(9)<<stTxTot<<endl;
    cout<<"Total Sales Tax:"<<"  $"<<setw(9)<<totTax<<endl;
    
  
    //Exit the program
    return 0;
}



  /*cout << "\n-------------------------\n";
    cout << "Month: " << month << endl;
    cout << "Year:  " << year << endl;
    cout << "-------------------------\n";
    cout << setprecision(2) << fixed;
    cout << "Total collected: " << setw(10) << "$" << setw(9) << totCol << endl;
    cout << "Sales: " << setw(20) << "$" << setw(9) << sales << endl;
    cout << "County Sales Tax:" << setw(10) << "$" << setw(9) << ctyTxTt << endl;
    cout << "State Sales Tax: " << setw(10) << "$" << setw(9) << stTxTot << endl;
    cout << "Total Sales Tax: " << setw(10) << "$" << setw(9) << totTax << endl <
  */