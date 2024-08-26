// CSC 134
// M1LAB - Appls orchard
// Sebastian Rusbacky
// 8/26/2024

#include <iostream>
using namespace std;

int main() 
{
  string name;
  int numApples;
  double pricePerApple;
  double totalCost;

  cout << "What is your name? " << endl;
  cin >> name;
  cout << "How many apples are in stock? " << endl;
  cin >> numApples;
  cout << "How much does each apple cost? " << endl;
  cin >> pricePerApple;

  totalCost = (double)numApples * pricePerApple;

  cout << "--------------------\n";
  cout << "Welcome to " << name << "'s apple orchard!\n";
  cout << "We have " << numApples << " apples currently for sale";
  cout << "Price per apple is currently $" << pricePerApple << " each.\n";
  cout << "Total Price for all in stock will be: $" << totalCost;

  return 0;
}