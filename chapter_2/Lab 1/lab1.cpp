//TO-DO: Zach McCall
//TO-DO: 09/08/2023
//CS1428 Lab
//Lab 1
//Description: this program will calculate a user's bmi

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string name;
    // TODO: Declare the rest of the variables (weight, height, bmi)
    double dWeight, dHeight, dBmi;

    // Prompt the user for name and store:
    cout << "What is your name?" << endl;
    cin >> name;

    // TODO: Prompt for and store the user's weight and height:
    cout << "what is your weight in pounds: ";
    cin >> dWeight;

    cout << "What is your height in inches: ";
    cin >> dHeight;

    // TODO: Calculate and assign the user's BMI to the appropriate variable:
    dBmi = (dWeight / (dHeight * dHeight) * 703);

    // TODO: Display the user's BMI to the console:
    cout << fixed << setprecision(2);
    cout << "Your total BMI is: " << dBmi << endl;
    // Exit the program:
    return 0;
}
