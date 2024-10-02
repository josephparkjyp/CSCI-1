#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

double bmiCalculator(double weight, double feet, double inches);

int main(void) {

    cout << "\n\nBMI CALCULATOR" << endl;
    cout << "Description: This is a Body Mass Index calculator. It takes your weight and height to calculated your BMI." << endl;
    cout << "\nPlease enter your weight (lbs.): ";
    double weight;
    cin >> weight;

    string height;
    cout << "\nPlease enter your height (ft. and in. separated by a space): ";
    cin.ignore();
    getline(cin, height);

    string feet = height.substr(0, height.find(" "));
    string inches = height.substr(height.find(" ") + 1, height.length());

    double bmi = bmiCalculator(weight, stoi(feet), stoi(inches));
    cout << "\nYour BMI: " << fixed << setprecision(1) << bmi << endl;
    
    string bmiResult;
    if (bmi < 18.5) {
        bmiResult = "underweight.";
    } else if (bmi >= 18.5 && bmi <25) {
        bmiResult = "normal weight.";
    } else if (bmi >= 25 && bmi < 30) {
        bmiResult = "overweight.";
    } else {
        bmiResult = "obese.";
    }

    cout << "You are " << bmiResult << endl;


    return 0;
}

double bmiCalculator(double weight, double feet, double inches) {
    double height = (feet * 12) + inches;
    return weight * 703 / ( height * height);
}