//
//  main.cpp
//  loops
//
//  Created by Christian Matos on 6/8/22.
//
/*
 for(int i = 1; i < 3; i++){
 
 }
 /* for(int i = 1; i < 3; i++){
      cout << "hi";
  }
  //use outside for outer scoope && only use of
  int i;
  for(i = 1; i < 3; i++){
      cout << i << endl;
  }
  
  for(int i = 1; i < 6; i++){
      cout << "hello world" << endl;
      
  }
  
  for(int i = 1;  i < 6; i++){
      cout << i << endl;
  }
  
  for(int i = 0; i < 11; i++){
      cout << i << endl;
  }
  
  for(int i = 10; i > 0; i--){
      cout << i << endl;
  int num_quizzes;
  float quiz_grades;
  float total_grade = 0;
  
  cout << "how many quzzies have you taken? ";
  cin >> num_quizzes;
  
  for( int  i = 0; i < num_quizzes; i++){
      cout << "type quiz grade: ";
      cin >> quiz_grades;
      total_grade += quiz_grades;
  
  }
  cout << "tatal is: " << total_grade <<  endl;
  cout << "average is: " << total_grade / num_quizzes << endl;
 */
//
//
//
//


#include <iostream>

using namespace std;

int main()
{
 
    
    int steps;
    int days_walked;
    int overall_steps = 0 ;
    
    cout << "how many days did you walk? ";
    cin >> days_walked;
    
    
    for ( int i = 0; i < days_walked; i++){
        cout << "how many steps did you take? ";
        cin >> steps;
        overall_steps += steps;
        
    }
    
    cout << " total of steps is! \t " << overall_steps << endl;
    
    
    
    
    return 0;
}
