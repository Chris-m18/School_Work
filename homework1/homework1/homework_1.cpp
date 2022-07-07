//
//  main.cpp
//  homework1
//
//  Created by Christian Matos on 6/3/22.
//
// short program about me
//  I'm using stored information in variables to introduce myself.

#include <iostream>

using namespace std;



int main() {
    
    string firstname = "Matos, Christian";
    string school = "BMCC";
    int credits = 4;
    double gpa = 3.12;
    char character = '@';
    string quote = "\"With great power comes great responsibility\"";
    string aboutme = " I find computer science amazing there\nis so much to do in the industry with these talents.\n I still remember when I got my first pc in 1999!";
    
    cout << "\t\t\t\\\\\\My Info\/\/\/" << endl;
    cout << "Student Name: \t\t" << firstname << endl;
    cout << "School Name: \t\t" << school << endl;
    cout << "Semester Cred: \t\t" << credits << endl;
    cout << "Semester Gpa: \t\t" << gpa << endl;
    cout << "Fav. Character: \t" << character << endl;
    cout << "Fav. Quote: \t\t" << quote << endl;
    cout << "\n\nAbout Me: " << aboutme << endl;
    

    return 0;
}
