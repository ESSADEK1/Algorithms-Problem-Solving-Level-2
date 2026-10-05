#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

bool isPerfectNumber(int Number) 
{ 
	int Sum = 0;

	for (int i = 1;i < Number;i++) {
		if (Number % i == 0)
			Sum += i;
   }
	return Number == Sum;
}

void PrintResults(int Number)
{
	if(isPerfectNumber(Number))
		cout << Number << " Is Perfect Number.\n";  // If true, print that the number is perfect.
	else
		cout << Number << " Is NOT Perfect Number.\n"; // Otherwise, print that it is not perfect.
}

int main()
{
	// Prompt the user to enter a positive number and then display whether it's a perfect number.
	PrintResults(ReadPositiveNumber("Please enter a positive number?"));

	return 0; // Return 0 to indicate that the program executed successfully.
}
