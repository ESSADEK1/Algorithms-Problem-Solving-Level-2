#include<iostream>
using namespace std;

string ReadPassword()
{
	string Password;

	cout << "Please enter a 3-Letter Password (all capital)?\n";
	cin >> Password;

	return Password;

}

bool GuessPaswword(string OriginalPassword)
{
	string word = "";
	int counter = 0;
	cout << "\n";

	for (int i = 65;i <= 90;i++) {

		for (int j = 65;j <= 90;j++) {

			for (int k = 65;k <= 90;k++) {

				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				counter++;

				cout << "Trial [" << counter << "]: " << word << endl;

				if (word == OriginalPassword)
				{
					cout << "\nPassword is " << word << "\n";
					cout << "Found after " << counter << " Trial(s)\n";
					return true;
				}

				word = "";
			}
		}
	}
	return false;
}

int main() {
	GuessPaswword(ReadPassword());
}
