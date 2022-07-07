//
//  main.cpp
//  munip
//
//  Created by Christian Matos on 6/15/22.
//
/*int num = 10;
double num2 = 1.5;
char character = '#';

cout << setw(10) << "num" << setw(5) << num;
cout << setw(10) << "num2" << setw(5) << num2;
cout << setw(10) << "char" << setw(5) << character;
cout << num2 << character;
 
 ~~~break statement~~~
 
 break;
 
 coutinue;
 
 
 
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int rows;
    int cols;
    
    cout << "this program will create  MULTIPLICATION TABLE WITH X & Y starting with number" << endl;
    
    do{
    cout << "choose a value for X" << endl;
    cin >> rows;
    }while(rows < 0 );
    cout << "choose a value for Y" << endl;
    cin >> cols;
    while (cols < 0){
        cout << "invalid type a positive number";
        cin >> cols;
    }
        
        
    cout << setw(2) << "X";
    
    for( int x = 0; x <= cols; x++){
        cout << setw(5) << x;
       
    }
    cout << endl;
    for (int i = 0; i <= rows; i++){
        cout << setw(2) << i;
        
        for (int j = 0; j <= cols; j++){
            cout<< setw(5) << i * j;
                
        }
        
        cout << endl;
    }
        
   
    
    
    return 0;
}
