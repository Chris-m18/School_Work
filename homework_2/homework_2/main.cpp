//
//  main.cpp
//  homework_2
//
//  Created by Christian Matos on 6/7/22.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
    const float KM_PER_MI = 1.609;
    string first, middle, last;
    string goingCity;
    float temp_f;
    float distance_M;
    float ticket_price;
    
    
    cout << "Whats your first name? " << endl;
    cin >> first;
    cout << "whats your last middle name? " << endl;
    getline(cin, middle);
    cin.get();
    cout << "What is your last name? " << endl;
    cin >> last;
    cin.get();
    cout << "what city are you going to? " << endl;
    getline(cin, goingCity);
    cout << "Whats the temperature like (in fahrenheit)?  " << endl;
    cin >> temp_f;
    cout << "The distance your flying (in miles)? " << endl;
    cin >> distance_M;
    cout << "How much was the ticket? " << endl;
    cin >> ticket_price;
    
    
    
    cout << "--------------------Flight Summary--------------------" << endl;
    cout << "Passenger full name: \t" << first <<  middle << "\t" << last << endl;
    cout << "Destination City: \t" << goingCity << endl;
    cout << "Temp. at Destination: \t" << temp_f << "F" << "\t" << "(" << fixed << showpoint << setprecision(1) << (temp_f-32)*5/9 << "C" << ")" << endl;
    cout << "Flight Distance: \t" << distance_M << "Mi" << "\t" << "(" << KM_PER_MI * distance_M << "km)" << endl;
    cout << "Flight Duration: \t" << goingCity << endl;
    cout << "Ticket Price: \t" << "$" << ticket_price << endl;
    
    
    
    
    
    
    return 0;
}
