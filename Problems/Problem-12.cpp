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

void PrintInvetedNumber(int Number) {
	
	cout << endl;

	for (int i = Number;i >= 1;i--) {

		for (int j = 1; j <= i; j++)
		{
			cout << i;  // Print the digit 'i' without a space.
		}

		cout << "\n";  // After printing one line, move to the next line.
	}
}

int main() {
	int Number = ReadPositiveNumber("Enter a positive number");
	PrintInvetedNumber(Number);
  }
