//
//  main.cpp
//  GPA_calc
//
//  Created by Christian Matos on 6/9/22.
//
/* this program cuculates students gpa based on how many credits and grade yhey got*/

#include <iostream>

using namespace std;


int main() {
    int num_claess;
    int course_credits, total_credits = 0;
    float number_grade;
    string letter_grade;
    float quality_total, total_qulity_pts = 0;
    float gpa;
    
    cout << "how many classes are you taking? ";
    cin >> num_claess;
    
    for(int i = 1; i <= num_claess; i++){
        cout << "how many credits was the course? ";
        cin >> course_credits;
        cout << "what is your numric grade? ";
        cin >> number_grade;
        if ( number_grade >= 93 && number_grade <= 100){
            letter_grade = 'A';
            total_qulity_pts = 4.0;
        }
        else if ( number_grade >= 93 && number_grade <= 100){
            letter_grade = "A-";
            total_qulity_pts = 3.7;
        }
        else if ( number_grade >= )
            
        
    }
    
    
    
    
    return 0;
}
