#include <iostream>
using namespace std;


int main()
{
	int	p;
	cout << "\nHow many pennies do you have? \n";
	cin >> p;
	cout << "\nThis is equivilent to: \n\n";

  //dollars
	int	d1 = p / 100;
	p = p % 100;

  //quarters
	int	q = p / 25;
	p = p % 25;

  //dimes
	int	d = p / 10;
	p = p % 10;

  //nickels
	int	n = p / 5;
	p = p % 5;

  //pennies don't need an equation since its already in pennies

  //outputting the numbers
	cout << d1 << " Dollars" << endl;
	cout << q << " Quarters" << endl;
	cout << d << " Dimes"  << endl;
	cout << n << " Nickels " << endl;
	cout << p << " Pennies"  << endl;

	return 0;
}