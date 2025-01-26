/*Program File Name: Chapter2Exercise7
Programmer: Patrick Liao
Date: 1.26.2025
Requirements: Assuming an ocean level rise of 1.5 millimeters per year, display the number of millimeters higher than the current level the ocean will be in 5, 7, and 10 years. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double oceanriserate = 1.5;
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 5 years: " << oceanriserate * 5 << endl;
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 7 years: " << oceanriserate * 7 << endl;
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 10 years: " << oceanriserate * 10 << endl;
    return 0;

}