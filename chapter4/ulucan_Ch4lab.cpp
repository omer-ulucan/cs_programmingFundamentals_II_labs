/*
Omer Ulucan

This program calculates how long it takes for a sound wave to travel a specific distance through a selected medium (air, water, or steel).
It allows the user to choose the medium, input the distance in feet, and then computes and displays the time in seconds with four decimal places.
If the user enters an invalid medium choice, the program will terminate with an appropriate message.
*/

// Status : Complete

// Did your program pass the  testing? : Yes or No
// If you answered "No", what testing did not pass?
// Did your program meet the requirements? : Yes or No
// If you answered "No", what requirements were not met?

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
    // Speed values for air, water, and steel in ft/sec
    const double AIR_SPEED = 1100.0;
    const double WATER_SPEED = 4900.0;
    const double STEEL_SPEED = 16400.0;

    // Variables
    int choice;
    double distance, time;

    cout << "This program will tell you how long it takes for a sound wave to travel a certain distance through a selected medium.\n";
    cout << "Please choose a medium:\n";
    cout << "1. Air\n";
    cout << "2. Water\n";
    cout << "3. Steel\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Checking for invalid choice
    if (choice < 1 || choice > 3)
    {
        cout << "Invalid choice. Program terminating.\n";
        return 1;
    }

    // Get distance from user
    cout << "Enter the distance the sound wave will travel (in feet): ";
    cin >> distance;

    // Calculate time based on the selected medium
    switch (choice)
    {
    case 1:
        time = distance / AIR_SPEED;
        cout << setprecision(4);
        cout << "The sound wave will travel " << distance << " feet through air in " << time << " seconds.\n";
        break;
    case 2:
        time = distance / WATER_SPEED;
        cout << setprecision(4);
        cout << "The sound wave will travel " << distance << " feet through water in " << time << " seconds.\n";
        break;
    case 3:
        time = distance / STEEL_SPEED;
        cout << setprecision(4);
        cout << "The sound wave will travel " << distance << " feet through steel in " << time << " seconds.\n";
        break;
    }
    return 0;
}