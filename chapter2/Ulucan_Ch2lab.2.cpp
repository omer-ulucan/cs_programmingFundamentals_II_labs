/*
 Omer Ulucan

 Basketball Player Height

 This program converts a player's height from inches to feet and inches format. 
 It takes the total height in inches and calculates the equivalent height in feet and inches.

 Status : Complete

 Did your program pass the testing? : Yes
 If you answered "No", what testing did not pass? : N/A
 Did your program meet the requirements? : Yes
 If you answered "No", what requirements were not met? : N/A
*/

#include <iostream>
using namespace std;

int main() {
	//Player's height in inches
	int heightInInches = 75;
	
	//Calculation of the height in feet and remaining inches
	int feet = heightInInches / 12;
	int inches = heightInInches % 12;
	
	cout << "A " << heightInInches << " inch tall basketball player is " << feet << " feet and " << inches << " inches tall." << endl;
	return 0;
}