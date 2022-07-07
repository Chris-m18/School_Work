//
//  main.cpp
//  quiz
//
//  Created by Christian Matos on 6/14/22.
//
/*
 do {
 
 }while(boolen expression
 */

#include <iostream>

using namespace std;


int main(){
    
    
    double quiz_grade;
    double total_grade = 0;
    int num_quiz = 0;
    char user_input;
    
     
    cout << "Do you have a quiz grade? (Y/N)";
    cin >> user_input;
    
    while(user_input == 'Y' || user_input == 'y'){
        num_quiz++;
        cout << "what is your grade? " << endl;
        cin >> quiz_grade;
        total_grade += quiz_grade;
        cout << "anymore grades? (Y/N)" << endl;
        cin >> user_input;
        
    }
    
    cout << "The number of test you took are: " << num_quiz <<  endl;
    cout << total_grade / num_quiz;
    
    
    
    
    
    
    
   /* double quiz_grade;
    double total_quiz = 0;
    int num_quiz = 0;
    
    
    cout << "whats your quiz grade";
    cin >> quiz_grade;
    
    while(quiz_grade != -1){
        num_quiz++;
        cout << "type in another quiz grade: (type -1 if done) " << endl;
        total_quiz += num_quiz;
        cin >> quiz_grade;
        
    }
    cout << "number of quiz are: " << num_quiz << endl;
    cout << "your grade averave is: " << total_quiz / num_quiz;*/
    
    
    
    return 0;
}




