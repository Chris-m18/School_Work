//
//  main.cpp
//  calculaterv2
//
//  Created by Christian Matos on 6/7/22.
//

#include <iostream>

using namespace std;


int main()
{
    int num1 , num2;
    char userInput;
    
    cout << "type your num1: ";
    cin >> num1;
    cout << "type your num2: ";
    cin >> num2;
    cout << "A to add" << endl;
    cout << "S to subtract" << endl;
    cout << "M to mutiply" << endl;
    cout << "D to divide" << endl;
    cin >> userInput;
    cout << "this is your value: ";
    
    switch(userInput){
        
        case 'a':
        case 'A':
            cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
            break;
        case 's':
        case 'S' :
            cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
            break;
        case 'm':
        case 'M':
            cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
            break;
        default:
            cout << "try agin" << endl;
            
            
    }
    
    
    return 0;
}
