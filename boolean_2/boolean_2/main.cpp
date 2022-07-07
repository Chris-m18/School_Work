//
//  main.cpp
//  boolean_2
//
//  Created by Christian Matos on 6/7/22.
//


/*bool p, q, r ;
p = true;
q = true;
r = false;
cout <<  ( p || (q && r) ) << endl;
cout << (p || q) && r;
 
 ternary operator =  3 thing in our expression ?:
 
 boolean var ? valaes with same data type : valaes with same data type
 
 
 */


#include <iostream>

using namespace std;


int main()
{
    int credits;
    double gpa;
    char userInput;
    bool hasRecommendation;
    
    cout << "how many credits do you have? " << endl;
    cin >> credits;
    cout << "what is your gpa? " << endl;
    cin >> gpa;
    cout << " do you recommendation from your csc 211 professor? (Y/N) " << endl;
    cin >> hasRecommendation;
   
    
    
    
    if (userInput != 'Y' && userInput != 'y' && userInput != 'N' && userInput != 'n'){
        cout << "invalid plese type Y/N" << endl;
        cin >> userInput;
    }
    
        
    if  (userInput  == 'Y' || userInput == 'y' ){
        hasRecommendation = true;
        }
    else
        hasRecommendation = false;
    
    
    if ((gpa >= 3.5 || hasRecommendation ) && credits >= 40) {
        cout << "your are eligible for this opporttunity" << endl;
        
    }
    else
        cout <<  "There may be other opportunities" << endl;
    
 
    
    
    
    return 0;
}



