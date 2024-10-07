#include <iostream>
using namespace std;

int main() {

    string firstName, lastName;
    int birthYear, prelim, midterm, prefinal, finalGrade;
    double average;


    cout << "This was a Prelim Exam!" << endl;
    cout << "" << endl;
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Birth Year: ";
    cin >> birthYear;


    int age = 2024 - birthYear;
    cout << "Hi, " << firstName << " " << lastName << ", you are " << age << " years old today." << endl;
    cout << "" << endl;


    cout << "Please enter your Grades!" << endl;
    cout << "" << endl;
    cout << "Prelim: ";
    cin >> prelim;
    cout << "Midterm: ";
    cin >> midterm;
    cout << "Prefinal: ";
    cin >> prefinal;
    cout << "Final: ";
    cin >> finalGrade;

    average = (prelim + midterm + prefinal + finalGrade) / 4.0;


    cout << "Your average is: " << average << endl;
    cout << "" << endl;

    string letterGrade;
    double gradePoint;

    if (average >= 96) {
        gradePoint = 1.00;
        letterGrade = "Excelent";
    } else if (average >= 93 && average <= 95) {
        gradePoint = 1.25;
        letterGrade = "Very Good";
    } else if (average >= 90 && average <= 92) {
        gradePoint = 1.50;
        letterGrade = "Very Good";
    } else if (average >= 87 && average <= 89) {
        gradePoint = 1.75;
        letterGrade = "Good";
    } else if (average >= 84 && average <= 86) {
        gradePoint = 2.00;
        letterGrade = "Good";
    } else if (average >= 81 && average <= 83) {
        gradePoint = 2.25;
        letterGrade = "Good";
    } else if (average >= 78 && average <= 80) {
        gradePoint = 2.50;
        letterGrade = "Fair";
    } else if (average >= 75 && average <= 77) {
        gradePoint = 2.75;
        letterGrade = "Fair";
    } else if (average >= 72 && average <= 74) {
        gradePoint = 3.00;
        letterGrade = "Fair";
    } else if (average >= 60 && average <= 71) {
        gradePoint = 5.00;
        letterGrade = "Failed";
    } else {
        gradePoint = 0;
        letterGrade = "Incomplete";
    }

    cout << "Congratulations! You passed!" << endl;
    cout << "You got a " << gradePoint << " Grade Point (" << letterGrade << ")!" << endl;

    return 0;
}
