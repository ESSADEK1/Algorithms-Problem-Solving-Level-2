#include<iostream>
#include<string>
#include<cstdlib>


using namespace std;

int RandomNumber(int From, int To)
{

	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;

}

enum enChartype
{

	SmallLetter = 1,
	CapitalLetter=2,
	SpecialCharacter=3,
	Digit=4,
};

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
	return '\0';}

int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enChartype::SmallLetter) << endl;
	cout << GetRandomCharacter(enChartype::CapitalLetter) << endl;
	cout << GetRandomCharacter(enChartype::SpecialCharacter) << endl;
	cout << GetRandomCharacter(enChartype::Digit) << endl;


	return 0;

}
