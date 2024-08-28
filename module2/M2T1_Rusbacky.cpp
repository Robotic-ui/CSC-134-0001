// CSC-134
// M2T1
// Sebastian Rusbacky
// 8/28/2024
// simple receipt output

#include <iostream>
using namespace std;

int main()
{
    double mealPrice = 5.99;
    double taxRate = 0.08;
    double taxAmount;
    double total;

    taxAmount = taxRate * mealPrice;
    total += taxAmount;

    cout << "Thank you for coming and dining with us!\n" << endl;
    cout << "Your meal total is $" << mealPrice << endl;
    cout << "The tax amount is $" << taxAmount << endl;
    cout << "Your total is $" << total << endl;
}