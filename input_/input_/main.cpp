//
//  main.cpp
//  input_
//
//  Created by Christian Matos on 6/1/22.
//
/*
 06/01 Notes
 "enter" is a charater also (keyboard buffer)
 % = modulo (remender after divison)
 only on the right side you can use thses symbols
 combined asigned operaters +=, -=, *=, /=
 ex ( a + = x)
 
 other ops
 x++; x = x + 1
 
 06/2 Notes
 sqrt()
 pow()
 
 ch = cin.get()
 cin.get()
 
 getline(cin, variable name);

 cin.ignore();
 ignores
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    
    /*char ch = 'A';
    cout << static_cast<char>(ch + 32);*/
    
    
    
    
    
    /*int x = 10;
    cout << "x before x++: " << x << endl;
    cout << ++x << endl;
    cout << "x after the x++: " << x << endl;*/
    
    
    
    
    int length, width;
    int average;
    string color;
    float diagonal, diagonalsquared;
    

    

    cout << "whats is the lenght of the rectangle? ";
    cin >> length;
    cout << "what is the width of the rectangle? ";
    cin >> width;
    cout << "what color is the rectangle? ";
    cin >> color;
    

    //diagonalsquared = pow(length, 2) + pow(width, 2); // adds length^2 + width^2
    //diagonal = sqrt(diagonalsquared);
    diagonal = sqrt(pow(length,2) + pow(width,2));
    cout << " The length in inches: " << length / 12 << "'" << length % 12 << "\"" << endl;
    cout << " and The width in inches: " << width / 12 << "'" << width % 12 << "\"" << endl;
    cout << " also The color is " << color << "." << endl;
    cout << "The total space of the rectangle is: " << length * width << endl;
    cout << "perimeter is: " << length + width + length + length << endl;
    cout << "the avrage is: " << average << endl;
    cout << "feet ':" << "inches \":" << endl;
    cout << "diagonal : " <<  diagonal << endl;
    
    

    
    
    
    return 0;
}


