#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0;  
    int NewNumber = 0;    

    while (Number > 0)
    {
        Remainder = Number % 10;          
        Number = Number / 10;             
        NewNumber = NewNumber * 10 + Remainder;
    }

    return NewNumber;  
}

bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

int main() {

    if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number?")))
        cout << "\nYes , it is a Palindrome number.\n";  // If true, print affirmative message.
    else
        cout << "\nNo , it is NOT a Palindrome number.\n"; // Otherwise, print negative message.

    return 0;  // Return 0 to indicate successful program execution.
}

