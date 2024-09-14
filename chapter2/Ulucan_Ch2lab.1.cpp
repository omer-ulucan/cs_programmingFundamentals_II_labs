/* 
 Omer Ulucan

 Flash Drive Price
 
 This program calculates the selling price of a flash drive 
 based on its base cost and a desired profit percentage.


 Status : Complete
 Did your program pass the testing? : Yes
 If you answered "No", what testing did not pass? : N/A
 Did your program meet the requirements? : Yes
 If you answered "No", what requirements were not met? : N/A
*/

#include <iostream>
using namespace std;

int main()
{
    // Flash drive cost
    double flashCost = 8.00;
    // Profit percentage
    double profit = 35.0;
    // Selling Price calculation
    double sellingPrice = flashCost + (flashCost * (profit / 100));
    // Displaying the selling price
    cout << "To have a " << profit << "% profit, the flash drive should sell for $" << sellingPrice;

    return 0;
}