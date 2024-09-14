#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double actualPropertyValue, taxRate;

    cout << "Enter the actual property value: $";
    cin >> actualPropertyValue;

    cout << "Enter the amount of tax per $100 of assessed value: $";
    cin >> taxRate;

    double assessedValue = actualPropertyValue * 0.6;

    double propertyTax = (assessedValue / 100) * taxRate;

    cout << fixed << setprecision(2);

    cout << "Property Value: $" << setw(10) << actualPropertyValue << endl;
    cout << "Assessed Value: $" << setw(10) << assessedValue << endl;
    cout << "Property Tax: $" << setw(13) << propertyTax << endl;

    return 0;
}