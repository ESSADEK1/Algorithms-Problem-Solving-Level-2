#include<iostream>
#include<cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrlength)
{
	for (int i = 0; i < arrlength; i++)
		arr[i] = RandomNumber(1, 100);
}

int MaxNumberInArray(int arr[100], int arrlength)
{
	int Max = 0;
	for (int i = 0;i < arrlength;i++)
	{
		if (arr[i]>Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}

void PrintArray(int arr[100], int arrlength)
{
	for (int i = 0;i < arrlength;i++)
	{
		cout << arr[i] <<" ";
	}
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100], arrlength;
	arrlength = ReadPositiveNumber("Please enter Number of array");
	FillArrayWithRandomNumbers(arr, arrlength);
	PrintArray(arr, arrlength);
	cout << "\nMax Number is : ";
	cout << MaxNumberInArray(arr, arrlength) << endl;
	return 0;

}
