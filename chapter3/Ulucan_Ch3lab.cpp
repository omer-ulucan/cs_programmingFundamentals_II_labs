// Omer Ulucan
// This program calculates the property tax based on the 
// actual property value and the tax rate entered by the user.
// It displays the assessed property value (60% of the actual value) 
// and calculates the property tax accordingly.

// Status : Complete

// Did your program pass the  testing? : Yes
// If you answered "No", what testing did not pass? N/A
// Did your program meet the requirements? : Yes
// If you answered "No", what requirements were not met? N/A
 
/*
I will abide by the ACC Honor code and answer these following questions with full integrity and honesty, I understand if I answer "False" to any of these questions, I will receive zero for this assignemnt
1. My submission is my own work.
2. I promise not to share my work with anyone in any form.
3. I did not use any outside tools (including but not limited to AI chatbots) to complete the Lab assignment
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Variables to hold user input: actual property value and tax rate
    double actualPropertyValue, taxRate;
    
    // User enter the actual value of the property
    cout << "Enter the actual property value: $";
    cin >> actualPropertyValue;

	// User enter the tax rate per $100 of assessed value
    cout << "Enter the amount of tax per $100 of assessed value: $";
    cin >> taxRate;

    // Calculate the assessed value (60% of the actual property value)
    double assessedValue = actualPropertyValue * 0.6;

    // Calculate the property tax based on the assessed value and tax rate
    double propertyTax = (assessedValue / 100) * taxRate;

    // Set the output to display two decimal places
    cout << fixed << setprecision(2);

    // Display the actual property value, assessed value, and property tax
    cout << "Property Value: $" << setw(10) << actualPropertyValue << endl;
    cout << "Assessed Value: $" << setw(10) << assessedValue << endl;
    cout << "Property Tax:   $" << setw(10) << propertyTax << endl;

    return 0;
}