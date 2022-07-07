//
//  main.cpp
//  boolean
//
//  Created by Christian Matos on 6/6/22.
//
/*
 if( Boolean expression )
 {
 
 
 }
 
 if ( boolean expression ) {
 
 
 }
 else
 {
 
 
 }
 
 
 if ( boolean expression ) {
 
 
 }
 else if ( boolean expression ){
 
 
 

 
 }
 
 
 
 
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int operand1;
    int operand2;
    char user;
    
    
    

    cout << "type your operand1: ";
    cin >> operand1;
    cout << "type your operand2: ";
    cin >> operand2;
    cout << "A to add" << endl;
    cout << "S to subtract" << endl;
    cout << "M to mutiply" << endl;
    cout << "D to divide" << endl;
    cin >> user;
    cout << "this is your value: ";
    
    if (user == 'A' || user == 'a'){
        cout << operand1 << "+" << operand2 << "=" << operand1 + operand2 << endl;
        
    }
    else if ( user == 'S' || user == 's'){
        cout << operand1 << "-" << operand2 << "=" << operand1 - operand2 << endl;
    }
    else if ( user == 'M' || user == 'm'){
        cout << operand1 << "*" << operand2 << "=" << operand1 * operand2 << endl;
    }
    else if (user == 'D' || user == 'd'){
       
        if (operand2 == 0 )
            cout << "cannot divid by zero" << endl;
            

        cout << operand1 << "/" << operand2 << "=" << static_cast<float>(operand1) / operand2 << endl;
     
    }
    else
        cout << "WHAT ARE YoU DOING!?!";
    
    
    
  /*  int num;
    
    cout << "what id the number? ";
    cin >> num;
    cout << "your number is: ";
    
    if ( num % 2 == 0 ) {
        
        cout << "even";
        
     }
    else
    {
        cout << "odd" << endl;
        
    }
    
    
    double number;
    
    cout << "Number Pleses";
    cin >> number;
    cout << "your number is: ";
    
    if (number > 0  ){
        cout << "positive" << endl;
    }
    else if ( number < 0 ){
        cout << "negitive";
    }
    else {
        cout << "zero";
    }*/
    
    return 0;
}
 
