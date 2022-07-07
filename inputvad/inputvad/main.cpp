//
//  main.cpp
//  inputvad
//
//  Created by Christian Matos on 6/14/22.
//

#include <iostream>

using namespace std;

int main(){
    int rows, cols;
    
    cout << "how many rows? ";
    cin >> rows;
    cout << "how many cols";
    cin >> cols;
    //nested
    for (int i = 1; i <= rows; i++){
        
        for (int j = 1; j <= cols; j++){
            cout << "*" ;
        }
        cout << endl;
    }
    
   /*double value;

    do{
        cout << "whats your grade? ";
        cin >> value;
    } while(value < 0 || value > 100);
        if (value >=60)
            cout << "pass" << endl;
    else if (value <= 60 )
        cout << "faild" << endl;*/
    return 0;
}
