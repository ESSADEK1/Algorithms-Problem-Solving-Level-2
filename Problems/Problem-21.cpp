#include<iostream>
#include<cstdlib>

using namespace std;

enum enChartype { SmallLetter = 1,CapitalLetter = 2,SpecialCharacter=3,Digit=4 };

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

char GetRandomCharacter(enChartype CharType)
{

	switch (CharType) {
	case enChartype::SmallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}

	case enChartype::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}

	case enChartype::SpecialCharacter:
	{
		return char(RandomNumber(33, 47));
		break;

	}

	case enChartype::Digit:
	{
		return char(RandomNumber(48, 57));
		break;

	}
	}
	return '\0';
}

int ReadPositiveNumber(string Message)
{

	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	

	return Number;

}

string GenerateWord(enChartype CharType, short Length)
{
	string Word="";
	
	for (int i=1;i<=Length;i++)
	{
	
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string GenerateKey()
{

	string Key = "";

	Key = GenerateWord(enChartype::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enChartype::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enChartype::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enChartype::CapitalLetter, 4) ;

	return Key;
}

void GenerateKeys(short NumberOfKeys)
{
	cout << "\n";
	// Loop from 1 to NumberOfKeys.
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		// Print the current key number and the generated key.
		cout << "Key [" << i << "] : ";
		cout << GenerateKey() << endl;
	}
}

int main() {

	srand((unsigned)time(NULL));
	GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate? \n "));

}
