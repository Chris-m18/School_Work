/* After reading the assignment description, write your comment here, describing the program.
 
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  
    string first_name, last_name;
    char middle_initial;
    
    int age;
    float weight_kg;
    double height_m;  //height in meters
    float bmi;  //body mass index
    float visit_cost; //amount that doctor charged for this visit
    float covered_cost;  //the part of the cost that is covered by insurance
    float is_overweight = 0.0;
    bool  is_senior, is_smoker, has_insurance;                    //(insurance will pay this amount)
    char user_response; //for getting answers to Y/N questions.
    
    
    
    // #1 - Declare variables: is_senior, is_smoker, is_overweight, has_insurance;
    
    
    cout << "First name: ";
    getline(cin, first_name);
    cout << "Middle  initial: ";
    cin.get(middle_initial);
    cout << "Last name: ";
    cin.ignore();
    getline(cin, last_name);
    
    cout << "Age: ";
    cin >> age;
    
    //#2 - assign a value to is_senior.
    //If the age is 65 or greater, the value should be true. Otherwise, false.
    if (age <= 65){
        is_senior = true;
    }
    else{
        is_senior = false;
    }
    
    cout << "Height in meters: ";
    cin >> height_m;
    cout << "Weight in kg: ";
    cin >> weight_kg;
    cout << "Smoker? (Y/N): ";
    cin >> user_response;
    
    
    //#3 - assign a value to is_smoker.
    //If user_response is Y or y, is_smoker will be true. Otherwise, false.
    if (user_response == 'Y' || user_response == 'y'){
        is_smoker = true;
    }
    else{
        is_smoker = false;
    }
    //#4 - calculate bmi.  assign a value to is_overweight
    //BMI is calculated as weight in kg divided by height in meters squared
    
    bmi =  weight_kg / pow(height_m, 2);
    
    
    // #5 - assign a value to is_overweight.
    // if the bmi is 25 or more, then is_overweight is true. Otherwise, it's false.
    if (bmi >= 25){
       is_overweight = true;
    }
    
    cout << "Visit Cost: ";
    cin >> visit_cost;
    cout << "Covered by insurance? (Y/N): ";
    cin >> user_response;
    
    
    //#6 - assign a value to has_insurance.
    //If the user_response is Y or y, has_insurance should be assigned a value true. Otherwise, false.
    if (user_response == 'Y' || user_response == 'y'){
        has_insurance = true;
    }
    else{
        has_insurance = false;
    }
        

   
    //#7 - if the user has insurance, ask for the amount that insurance covers. Assign it to covered_cost
    
    if (has_insurance){
        cout << "What is the amount that insurance covers? ";
        cin >> covered_cost;
    }
    
    
    cout << "\n\nVisit Summary"<< endl;
    
    
    // #8 print full name.
    /* If the patient has a  middle initial, print the character and print a period (.) Otherwise, don't print anything between the first and last name.
    */
    
    if (middle_initial == true){
        cout << "Name:\t" << first_name << "\t" << middle_initial << "\t." << last_name << endl;
        
    }else{
        cout << "Name:\t" << first_name  << "\t" << last_name << endl;
    }

    cout << "Age:\t" << age << endl;
    cout << "Weight:\t" << weight_kg << "kg" << endl;
    cout << "Height:\t" << height_m << "m" << endl;
    
    
    // #9 print BMI and evaluation. See chart on Blackboard, Assignment 3.
    if (bmi <= 18.5){
        cout << "BMI:\t" << bmi << "\t(underweight)" << endl;
    }else if (bmi >= 18.5 && bmi <= 25){
        cout << setprecision(4)<< "BMI:\t" << bmi << "\t(normal weight)" << endl;
    }else if (bmi >= 25 && bmi <= 30){
        cout << "BMI:\t" << bmi << "\t(overwight)" << endl;
    }else {
        cout << "BMI:\t"<< bmi << "\t(obese)" << endl;
    }

    // #10 - format the output to show 2 digits after the decimal
    
    
    cout << "Today's Visit Cost:\t$" << visit_cost << endl;
    cout << "covered cost: \t" << covered_cost << endl;
    //#11 - if the patient has insurance. Print the covered cost followed by the percentage that was covered by insurance. The percentage should show 1 digit after the decimal.
    if (has_insurance == true){
        covered_cost = visit_cost / 100;
        cout << "Percent Covered: \t" << covered_cost << "%" << endl;
        cout << setprecision(2) << fixed << showpoint;
    }

    
    // #12 if the patient is senior, is overweight or is smoker, then print out "Patient has risk factors for heart disease. " and "Suggest a referral for cardiologist. "
    if ((is_senior == true && is_overweight == true) || is_smoker == true)
        cout << "Patient has risk factors for heart disease.\nSuggest a referral for cardiologist." << endl;
    return 0;
}
