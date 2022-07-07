//
//  main.cpp
//  dowhile
//
//  Created by Christian Matos on 6/14/22.
//

#include <iostream>

using namespace std;


int main(){
    
    char user_input;
    double item_price;
    double total_price = 0;
    int num_item = 0;
    
    do{
        cout << "price";
        cin >> item_price;
        total_price += item_price;
        cout << "do you have another one?  " << endl;
        cin >> user_input;
        num_item++;
        
    }while(user_input == 'Y' || user_input == 'y');
    
   /* double item_price;
    double total_price = 0;
    int num_items = 0;
    item_price = 0;

    do{
        total_price += item_price;
        cout << "What is the price of the item? " ;
        cin >> item_price;
        num_items++;
        
    }while (item_price != -1);
    num_items--;
    cout << "number of items today: " <<  num_items << endl;
    
    cout << "Your cost today is: " << total_price << endl;*/
    
    return 0;
}
