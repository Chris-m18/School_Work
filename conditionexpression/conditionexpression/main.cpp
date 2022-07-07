//
//  main.cpp
//  conditionexpression
//
//  Created by Christian Matos on 6/7/22.
//
/*int age;
cout << "what is your age" << endl;
cin >> age;
cout << (age < 18 ? "minor" : "adult") << endl;
 
 
 switch statment
 
 set up a variable to use with the switch statement
 
 switch (int type variable) {
 case---constant value : statements
 
 
 ** defult case
 }
 
 
 
 
 
 */



#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    

    
    
    const float DISCOUNT_PRICE = 0.33;
    int age;
    float ticket_Price;
    float regulare_price = 20;
    //float discount_ticket_price = 20 - (regulare_price * discount_percent);
    
    cout << "what is your age? " << endl;
    cout << setprecision(2) << fixed << showpoint;
    cin >> age;
    cout << (age < 18 ? "minor" : "adult") << endl;
    
    ticket_Price = age < 18 ?  20 - (regulare_price * DISCOUNT_PRICE ) : regulare_price;
    cout << "ticket price \t" << ticket_Price << endl;
    
    
    
    
    return 0;
}





